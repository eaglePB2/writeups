---
description: >-
  https://www.hackerrank.com/contests/codenection-2024-preliminary-round-closed-category/challenges/cn24-1
icon: square-code
---

# Codey and CodeNection

## Question

Codey loves creating patterns with letters! Codey wants to print a right-aligned pattern consisting of `n` rows using the letters from the word `CODENECTION`. Help Codey to build this unique pattern.

### Input Format

The first line contains an integer `n`, which represents the number of rows of the pattern.

### Constraints

$$
1 \le n \le 11
$$

### Output Format

Output the right-aligned pattern.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
6
```

#### Output

```
     C
    CO
   COD
  CODE
 CODEN
CODENE
```

#### Explanation

When `n` is `6`, the first `6` letters of the word `CODENECTION` is printed in a right-aligned pattern with 6 rows.
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Python Cheats</summary>

The hardest part of this question is actually to print a right-aligned pattern. Luckily for Python, it does have a function to handle with this :D&#x20;

Otherwise, receive the input, slice CODENECTION into an array with chars, loop it and print the char with range i \[:i] + rjust() function.

Here's the solution:

```python
t = int(input())
string = "CODENECTION"

for i in range(1, t+1):
    print(string[:i].rjust(t))
```

</details>
