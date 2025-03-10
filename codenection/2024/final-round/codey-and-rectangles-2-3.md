---
description: >-
  https://www.hackerrank.com/contests/codenection-2024-final-round-closed-category/challenges/cn24-20
icon: comment-dots
---

# Codey and Speeches

## Question

Codey is feeling extra motivated today (because it is the CodeNection Final day!) and wants to give motivational speeches! Codey has found n of its friends, lined up from left to right. Codey plans to deliver speeches starting **from the leftmost friend and moving to the rightmost friend**. For each friend, Codey **can choose whether to deliver a speech or skip them**.

Giving a speech to friend i will result in receiving a feedback score of $$a_i$$. The score $$a_i$$ **can be negative** because some friends might find Codey's speech boring!

Codey wants to give as many speeches as possible and stay motivated at the same time. This means that the total feedback score from the speeches delivered at any point **must remain greater than or equal to 0**.

Find the maximum number of speeches Codey can deliver while satisfying all the conditions!

### Input Format

The first line contains an integer n, which represents the number of friends.

The second line contains $$n$$ integers, $$a_1,a_2,...,a_n$$, each representing the feedback score of the i-th friend.

### Constraints

$$
1 \le n \le 10^5
$$

$$
-10^9 \le a_i\le10^9
$$

### Output Format

Output an integer representing the maximum number of speeches Codey can give.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
4
-5 10 -5 5
```

#### Output

```
3
```

#### Explanation

Codey will skip the first friend and give speeches to the rest of the friends. Codey cannot give a speech to the first friend because it would cause Codey to become demotivated immediately.
{% endtab %}

{% tab title="Input 1" %}
#### Input

```
4
10 -8 -1 -1
```

#### Output

```
4
```

#### Explanation

Codey will give a speech to every friend.
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - DP of despair</summary>

When I first attempting the question, I just thought a simple solution and got around 12/35 test cases correct.

The further I dig into multiple edge cases, the lower score I can scored to be, hence that's the reason of title of "despair".

In hugely despair, dynamic programming may become the solution, which is the final savior to save me out after three hours of fixing the code.

No matter what, the dynamic programming works as this:

1. (Optional) use a min\_heap to store negative numbers.
2. Create a DP array, in each cell, we maintain the sum and stop at the path if it went negative.
3. Once the path becomes negative, remove the least negative number.
4. Use dp\[i] to track the counter.
5. The final solution will be in dp\[n].

Finally, here's the solution of despair, which finally passed all test cases:

{% code lineNumbers="true" %}
```python
import heapq

def max_valid_sequence(n, arr):
    dp = [0] * (n + 1)  # DP table to store max valid count at each position
    sum_so_far = 0  # The current sum of selected elements
    min_heap = []  # Min-heap to track negative numbers efficiently

    count = 0  # Count of valid elements

    for i in range(n):
        num = arr[i]

        if num >= 0:  # If positive or zero, always include it
            sum_so_far += num
            count += 1
            dp[i + 1] = count
        else:  # If negative
            heapq.heappush(min_heap, num)  # Add to the heap
            sum_so_far += num
            count += 1

            # If the sum becomes negative, remove the smallest (least negative) value
            while sum_so_far < 0 and min_heap:
                removed = heapq.heappop(min_heap)
                sum_so_far -= removed  # Undo the addition
                count -= 1  # Reduce valid count

            dp[i + 1] = count  # Update DP table

    return dp[n]  # The answer is the last DP state

n = int(input())
arr = list(map(int, input().split()))
print(max_valid_sequence(n, arr)) 
```
{% endcode %}

</details>
