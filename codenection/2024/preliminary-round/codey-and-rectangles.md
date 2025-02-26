---
description: >-
  https://www.hackerrank.com/contests/codenection-2024-preliminary-round-open-category/challenges/cn24-9
icon: rectangle
---

# Codey and Rectangles

## Question

Codey has a rectangular sheet of paper with dimensions  `x` and `y`. It wants to draw a rectangle that is parallel to the edges of the paper with a **specified area** `k`. The rectangle drawn must satisfy the following conditions:

* Both the width and height of the rectangle drawn must be positive integers.
* The rectangle drawn must be exactly `k` square units and completely contained within the boundaries of the paper.
* The corners of the rectangle drawn must lie on integer coordinates.

Out of all possible rectangle dimensions with an area `k`, help Codey determine the maximum number of unique positions where it can draw the rectangle of area `k` on the paper.

### Input Format

The first line contains three integers `x`, `y`, and `k`, where `x` and `y` represent the dimensions of the rectangle sheet of paper, and `k` represents the area of the rectangle drawn.

### Constraints

$$
1 \le x,y \le 2000
$$

$$
1 \le k \le x * y
$$

### Output Format

Output the maximum number of unique positions where the rectangle of area `k` can be drawn on the paper. If there is no way the rectangle drawn will fit in paper, output $$0$$.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
4 4 9
```

#### Output

```
4
```

#### Explanation

for area $$k=9$$, the only possible integer dimensions are:

* $$1 * 9$$
* $$3 * 3$$

The first dimensions $$(1 * 9)$$ would extend beyond the paper dimensions $$(4 * 4)$$, so, it does not fit. Hence, it's optimal to have the rectangle drawn with side lengths $$3$$ and $$3$$. It can be shown that there's 4 ways to draw a $$(3 * 3)$$ rectangle in the paper:

<figure><img src="../../../.gitbook/assets/image (1).png" alt=""><figcaption></figcaption></figure>
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Mathematical Formula</summary>

This problem requires 2 checks:

* If the shape fits the dimension
* How many possibilities it can fit the graph, if possible?

Let's do the checks 1 by 1.

1. If the shape fits the graph

Since the rectangle can be any type of rectangle as long as it fits the requirement - area of k. So, we can check if either width or height fits the x or y of dimensions. We can check this by looking for modular, which if it is 0.

looping through 1 to one of the dimensions int, if there's no 0 in each modular iteraction, then we would know that the answer is 0.

if it got 0, we would find what is the other side of the rectangle and see if it exceeds the other dimension.

If this passes, this rectangle passes the first check.

2. Possibilities of rectangle fit the graph

The easiest way to illustrate it is to by moving the rectangle left to right, top to bottom. The formula of that possibilities can be described as:

$$(x - i + 1) * (y - j + 1)$$

The result you got from top is **one** of the possibilities.

From each possibility, only keep the maximum unique combinations out.

Keep continuing and add the results to the answer, after whole iteration is finished, the answer is out.

Here's the full code:

```python
x, y, k = map(int, input().strip().split())
j = 0
total = 0

for i in range(1, x+1):
    if(k % i == 0):
        j = k // i
        if(j <= y):
            total = max((x - i + 1) * (y - j + 1), total)

print(total)
```

Fun fact:

During the competition, I had mistakenly added up all the possibilities instead of just finding the maximum combination, which makes me loses a lot of time and marks for that QAQ.

Next time please read through the questions carefully QWQ

</details>
