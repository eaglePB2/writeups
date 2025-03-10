---
icon: pompebled
description: >-
  https://www.hackerrank.com/contests/codenection-2024-preliminary-round-closed-category/challenges/cn24-5
---

# Codey and Pebbles

## Question

Codey and its `n` friends have gathered in CodeNection Town. Each one of them brings a handful of pebbles they collected by the river. Everyone brings an even or odd number of pebbles, but one friend, by mistake, **brings a number that doesn’t match the rest**.

The friends line up in a row, each showing the number of pebbles they’ve brought. Help Codey identify the one friend whose pile has a different number type (odd or even) than all the others.

### Input Format

The first line contains an integer `n`, which represents the number of Codey's friends.

The second line contains `n` space-separated integers, where each integer represents the number of pebbles brought by Codey's friend.

### Constraints

$$
3 \le n \le 100
$$

### Output Format

Output a single integer representing the index of the number that differs in evenness, assuming index starts from 1.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
6
2 4 10 17 8 20
```

#### Output

```
4
```

#### Explanation

All numbers are even except `17`. The position of `17` is `4`, so the output is `4`.
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Binary Check</summary>

Given checking even or odd is basically modular 2, the answer should be either 1 and 0.

After that, check if it's only "1" or "0" in an array. Then, locate that odd one out, print its index+1, and done.

Here's my solution:

{% code overflow="wrap" lineNumbers="true" %}
```python
t = int(input().strip())
n = list(map(int, input().strip().split()))

check_binary = [i % 2 for i in n]

unique_check = 0
if (check_binary.count(1) == 1):
    unique_check = 1
    
for idx, val in enumerate(check_binary):
    if val == unique_check:
        print(idx + 1)
```
{% endcode %}

Note that I used the count() feature to count the number of 1s, if the count returns 1, which means the binary "1" is the only cell; otherwise, it's "0".

</details>
