---
description: >-
  https://www.hackerrank.com/contests/codenection-2021-closed-category/challenges/fair-contest
icon: keynote
---

# Fair Contest

## Question

There are N students in a class with known amount of programming skills (here the skill of a person is scored with a number). Now the lecturer wants to form two programming teams in the class in such a way that their overall difference in programming skill in minimal.

Your task is to help the lecturer find the minimum such achievable difference. (Note : The sizes of groups do not have to be equal)

### Input Format

The first input line has an integer N the number of students.

The next line has N integers $$p_1,p_2,...,p_n$$ the programming skill of each student.

### Constraints

$$
1 \le N \le 20
$$

$$
1 \le p_i \le 10^9
$$

### Output Format

Output one integer the minimum difference between the skills of the groups.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
10
603 324 573 493 659 521 654 70 718 257
```

#### Output

```
2
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>First Attempt — Greedy Algorithm</summary>

My first thought is to by simply using greedy algorithm, which works by first sorting the numbers in descending order, thus adding the numbers on both arrays. Thus, inserting the next number into smaller array to try balancing out.

Meanwhile, this won't work at all as this method only gives approximation, not exact minimum difference. For sample input, this method would output 62 instead of 2, which is not viable solution.

But this could be the first start before opting to better strategy.

```python
def min_partition_difference(arr):
    arr.sort(reverse=True)
    sum1, sum2 = 0, 0

    for num in arr:
        if sum1 < sum2:
            sum1 += num
        else:
            sum2 += num

    return abs(sum1 - sum2)

i = int(input())  
arr = list(map(int, input().split()))
print(min_partition_difference(arr))
```

</details>

<details>

<summary>Second Attempt — MiTM Dynamic Programming</summary>

After realizing that greedy algorithm won't work anyways, I tried to attempt this question by using dynamic programming instead. First, we know that the most optimized difference is 0, which is when both array is same. By making both array is same, the most optimized value should be the half of the sum of the inputs.

After getting the optimized target, now we can use iterative method to find if the combination of subset is able to reach the target. After taking all pairs of targets possible, we can simply divide the input array into 2 subsets (with all possible ways), compute all possible sums on each half, and lastly getting the best way to combine the sum as close as the target.

Although sounds feasible, meanwhile it defeats itself (TLE) when the test case values are large. Therefore, we have to think another better way to attempt this question.

```python
def min_partition_difference(arr):
    total_sum = sum(arr)
    n = len(arr)
    half_sum = total_sum // 2

    dp = [False] * (half_sum + 1)
    dp[0] = True

    for num in arr:
        for j in range(half_sum, num - 1, -1):
            if dp[j - num]:
                dp[j] = True

    for s in range(half_sum, -1, -1):
        if dp[s]:
            return total_sum - 2 * s

i = int(input())  
arr = list(map(int, input().split()))
print(min_partition_difference(arr))
```

</details>

<details>

<summary>Final Solution — Optimize with binary search, combinations</summary>

If we somehow utilize the ready-made library, maybe it can make it faster in some reason. The previous attempt hits the TLE as it took too much time to traverse all possible pairs.&#x20;

After thinking a bit, I think implementing a binary search during search phase, and introducing the combination library could help optimizing the problem.

Here's the final solution, which passed all test cases:

```python
from itertools import combinations
import bisect

def subset_sums(arr):
    sums = set()
    n = len(arr)
    for i in range(n + 1):
        for comb in combinations(arr, i):
            sums.add(sum(comb))
    return sorted(sums)

def min_partition_difference(arr):
    total_sum = sum(arr)
    half_sum = total_sum // 2
    n = len(arr)
    
    left, right = arr[:n//2], arr[n//2:]
    
    left_sums = subset_sums(left)
    right_sums = subset_sums(right)
    
    min_diff = float('inf')
    for s in left_sums:
        idx = bisect.bisect_right(right_sums, half_sum - s) - 1
        if idx >= 0:
            best_s = right_sums[idx] + s
            min_diff = min(min_diff, abs(total_sum - 2 * best_s))
    
    return min_diff

i = int(input())  
arr = list(map(int, input().split()))
print(min_partition_difference(arr))
```

</details>
