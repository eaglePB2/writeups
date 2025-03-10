---
icon: text-size
description: >-
  https://www.hackerrank.com/contests/codenection-2024-preliminary-round-closed-category/challenges/cn24-3
---

# Codey and Spam

## Question

Codey is too excited for CodeNection 2024! It wanted to spam a series of lines arranged in a triangle on the Discord server. The height (vertex) of the triangle is `n`, and it contains `2n-1` lines.

Example of `n = 3` containing `5` lines:

```
CODENECTION
CODENECTIONCODENECTION
CODENECTIONCODENECTIONCODENECTION
CODENECTIONCODENECTION
CODENECTION
```

However, Zoey will kick Codey out immediately if it **spam at least `x`** **`CODENECTION` word consecutively.** How many lines can Codey spam before Zoey kicks it out of the server?

### Input Format

The first line contains two integers, `n` and `x` , where `n` represents the height of the triangle and `x` represents the maximum number of consecutive `CODENECTION` allowed before Zoey kicks Codey out.

### Constraints

$$
1 \le n, x \le 10^5
$$

### Output Format

Output an integer representing the maximum number of lines Codey can spam before getting kicked out.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
5 16
```

#### Output

```
6
```

#### Explanation

Codey can spam a maximum of `6` lines, and since `1 + 2 + 3 + 4 + 5 + 4 >= 16`, Codey will get kicked out by Zoey after that.
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Triangle Half</summary>

Break this into 2 conditions:

1. From 1 to n
2. From n-1 to 1

My logic is first check if the sum of 1 to n is >= x. If it does, just add the numbers 1 by 1 until it >= x.

Otherwise, subtract the n with x, and do it reversely.

Here's my solution:

{% code overflow="wrap" lineNumbers="true" %}
```python
n, m = map(int, input().strip().split())

total_spam = 0
lines = 0
steps = 1

while steps <= n:
    total_spam += steps
    lines += 1
    if total_spam >= m:
        break
    steps += 1

if total_spam < m:
    steps = n - 1
    while total_spam < m and steps > 0:
        total_spam += steps
        lines += 1
        steps -= 1

print(lines)
```
{% endcode %}

The time complexity should be O(n).

</details>
