---
icon: symbols
description: >-
  https://www.hackerrank.com/contests/codenection-2024-final-round-open-category/challenges/cn24-4/problem
---

# Codey and Symbol

## Question

Codey was working on an equation but accidentally spilled water on its notes, blurring one of the symbols. Now, it can’t tell the correct relationship between the two sides of its equation.

The equation is given as:



$$
a - (\frac{b}{c}) ? (\frac{d}{e}) - f
$$

Help Codey find the relationship `?`.&#x20;

Print `>` if the left side is bigger, `<` if the right side is bigger, otherwise `=`.

### Input Format

The first line contains 6 values, $$a,b,c,d,e,f$$.

### Constraints

$$
0 \le a, b, c, d, e, f \le 10^5
$$

$$
c, e \ne 0
$$

### Output Format

Print a single character:

* $$>$$, if left side is larger.
* $$<$$, if left side is smaller.
* $$=$$, if both sides are equal.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
5 6 2 8 4 1
```

#### Output

```
>
```

#### Explanation

Left Side: $$5 - (\frac{6}{2}) = 2$$

Right Side: $$(\frac{8}{4}) - 1 = 1$$

$$2>1$$, therefore output `>`.
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Rounding Trap</summary>

This question is more like testing if you know programming rounding issues.

In some reason, when you divide a value, the number would get different when it rounds too many significant values, which is in default. (which we called, float rounding error)

Therefore, when comparing, don't forget to round to 4 values or fewer, so that the comparison will be correct.

Here's the code:

{% code overflow="wrap" lineNumbers="true" %}
```python
a, b, c, d, e, f = map(int, input().strip().split())
lhs = a - (b / c)
rhs = (d / e) - f

if round(lhs, 4) > round(rhs, 4):
    print(">")
elif round(rhs, 4) > round(lhs, 4):
    print("<")
else:
    print("=")
```
{% endcode %}

</details>
