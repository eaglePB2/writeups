---
description: >-
  https://www.hackerrank.com/contests/codenection-2024-final-round-closed-category/challenges/cn24-19
icon: symbols
---

# Codey and Rectangles 2

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

<summary>Solution - Easier Rectangles?</summary>

This question is even easier than preliminary round, [Codey and Rectangles](../preliminary-round/codey-and-rectangles.md).

Basically we can solve it using simple formulas.

Step 1: Find the area of both rectangles.

Given Rectangle A = $$(x_1, y_1)$$ to $$(x_2, y_2)$$, Rectangle B = $$(x_3, y_3)$$ to $$(x_4, y_4)$$.

The sum of the area of both rectangles are:

$$|[x_2-x_1]*[y_2-y_1]| + |[x_4-x_3] * [y_4-y_3]|$$

Step 2: Find the **Overlap** area of both rectangles.

The overlap length/width can be solved using this formula:

length: $$max(0, min(x_2,x_4)-min(x_1,x_3))$$

width: $$max(0, min(y_2,y_4) - min(y_1,y_3))$$

Lastly, multiply them to get the overlap area of both rectangles.

Step 3: Add them up!

It's simple, just area of both rectangles - overlap area of both rectangles. Finally, you have solved this problem!

Step 4: Generalize the formula into 2\~100 rectangles



Here's my code:

```python
// Some code
```

</details>
