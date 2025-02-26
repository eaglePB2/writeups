---
description: >-
  https://www.hackerrank.com/contests/codenection-2024-preliminary-round-open-category/challenges/cn24-8
icon: square-list
---

# Codey and Recipes

## Question

Codey wants to impress Zoey by recreating some of Zoey's secret recipes using the ingredients in his kitchen.

Codey lined up all its `n` ingredients from left to right in its kitchen. The kitchen can be represented as an array `a` of length `n`, where $$a_i$$ represents the type of ingredient at `i`-th position. Zoey's secret recipe is array `t` of length `m`, where $$t_i$$ represent the type of ingredient needed for its special dish.

As a beginner cook, Codey struggles to recognize the different ingredients. It decides to **select a subarray of `m` consecutive ingredients from its kitchen** (from array `a`). To replicate the flavor of Zoey's dish, Codey must ensure that **at least `p` ingredients** from this selected subarray is contained in `t`.

For example, if the target recipe $$t=[7,2,8,1]$$ and $$p=2$$, then:

* the subarray $$[2,1,8,7]$$ will impress Zoey because it contains at least 2 ingredients from `t`.
* the subarray $$[2,6,3,9]$$ will not impress Zoey.

Help Codey count how many subarrays of `m` ingredients it can find in its kitchen that meet Zoey's criteria.

### Input Format

The first line contains three integers `n`, `m`, and `p`, where  `n` represents the number of ingredients in Codey’s kitchen,  `m` represents the number of ingredients in Zoey's recipe, and `p` represents the minimum number of ingredients in the selected subarray that must also appear in Zoey's recipe.

The second line contains `n` integers $$a_1, a_2, ..., a_n$$, each representing the type of ingredients in Codey's kitchen.

The third line contains `m` integers $$t_1, t_2, ..., t_m$$, each representing the type of ingredients needed for the recipe.

### Constraints

$$
1 \le p \le m \le n \le 2*10^5
$$

$$
1 \le a_i \le 10^5
$$

$$
1 \le t_i \le 10^5
$$

Elements of the array `a` and `t` are not necessarily unique.

### Output Format

Output the number of subarrays of `m` ingredients Codey can find in its kitchen that meet Zoey's criteria.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
6 3 2
1 3 5 6 2 1
3 1 2
```

#### Output

```
2
```

#### Explanation

Subarray $$[1,3,5]$$ at position $$1$$ and subarray $$[6, 2, 1]$$ at position $$4$$ will meet Zoey's criteria.
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Sliding Window</summary>

This is a classical sliding window question. Sliding window technique is by getting a small range of array from a big array, and then compare it, then slide to the next element, and so on.

All we need to do is grab the m elements from n array, then compare using set if they have p equals, add counter 1, then slides on.

Here's the solution:

```python
from collections import Counter

m, n, k = map(int, input().strip().split())
array1 = list(map(int, input().strip().split()))
array2 = list(map(int, input().strip().split()))

count = 0
array2_set = set(array2)
    
for i in range(m - n + 1):
    subarray = array1[i:i + n]
    common_count = sum(1 for x in subarray if x in array2_set)

    if common_count >= k:
        count += 1
print(count)
```

But hold on a second, you may ask that this solution took too much time and get TLE.

Yep, that's my first submission during the code, and also got most of them TLE.

After been trying to figure it out the optimizations, I found one of the ways to optimize is by using tracking values while sliding the window, instead of checking all the arr2 elements to the current window 1 by 1.

You may wonder, how? Actually, it's simple.

1. Initialize the first window - This is exactly as same as the code above.
2. slide 1 element, compare that elements if it matches one of the elements, then add 1 to temp.
3. check if temp fulfils the k, if yes, then it is the 1 of them
4. Rinse and repeat, after all the elements are travelled, the answer is out.

This is my code during the contest (yes, it is very ugly)

```python
from collections import Counter

def count_matches(m, n, k, array1, array2):
    count = 0
    target_freq = Counter(array2)
    window_freq = Counter()
    match_count = 0
    
    # Initialize window, same as the first submission but manual mode.
    for i in range(n):
        element = array1[i]
        if element in target_freq:
            if window_freq[element] < target_freq[element]:
                match_count += 1
            window_freq[element] += 1

    # Check if first window has match count.
    if match_count >= k:
        count += 1
        
    for i in range(n, m):
        ## Removing left-most element
        outgoing = array1[i - n]
        if outgoing in target_freq:
            if window_freq[outgoing] <= target_freq[outgoing]:
                match_count -= 1
            window_freq[outgoing] -= 1

        ## Adding next element, see if next element is in array2 set
        incoming = array1[i]
        if incoming in target_freq:
            if window_freq[incoming] < target_freq[incoming]:
                match_count += 1
            window_freq[incoming] += 1

        ## Check if match count inpresses Zoey, the k.
        if match_count >= k:
            count += 1
    
    return count

m, n, k = map(int, input().strip().split())
array1 = list(map(int, input().strip().split()))
array2 = list(map(int, input().strip().split()))

print(count_matches(m, n, k, array1, array2))

```

</details>
