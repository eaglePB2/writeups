---
icon: rectangle-vertical
description: >-
  https://www.hackerrank.com/contests/codenection-2024-final-round-closed-category/challenges/cn24-19
---

# Codey and Rectangles 2

## Question

Codey is playing with rectangles again, but this time it's even more fun! Codey decorates the floor with n rectangular sheets of paper. Each side of the sheets is parallel to the x-axis or y-axis.

Each sheet's position on the floor is defined by four integers:

* $$a_i$$ and $$b_i$$: The x-coordinates of the left and right edges of the sheet.
* $$c_i$$ and $$d_i$$: The y-coordinates of the bottom and top edges of the sheet.

Help Codey calculate the **total area covered by the rectangular sheets of paper** on the floor.

### Input Format

The first line contains an integer n, where n represents the number of rectangular sheet of paper Codey has.

The following n lines contain four integers $$a_i,b_i,c_i$$ and $$d_i$$, where and represent the left and right edges of the sheet on the x-axis, while $$c_i$$ and $$d_i$$ represent the bottom and top edges of the sheet on the y-axis.

### Constraints

$$
2 \le n \le 100
$$

$$
0 \le a_i \le b_i \le 100
$$

$$
0 \le c_i \le d_i \le 100
$$

### Output Format

Output an integer, the total area covered by the sheets of paper.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
2
1 3 0 2
0 2 1 3
```

#### Output

```
7
```

#### Explanation

The first rectangle spans from $$(1,0)$$ to $$(3,2)$$, covering an area of 4 square units. The second rectangle spans from $$(0,1)$$ to $$(2, 3)$$, covering an area of 4 square units.

Since there is an overlap of $$1$$ square unit, the total area covered by both sheets is $$4 + 4 - 1 = 7$$ square units.
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Easier Rectangles?</summary>

This question is even easier than preliminary round, [Codey and Rectangles](../preliminary-round/codey-and-rectangles.md).

1. Create a 100 \* 100 array (yes, it is not that large)
2. Parse through the range and fill all the coordinate ranges to 1 (double for loop).
3. Count the total number which is 1. Problem solved.

Here's the code:

{% code overflow="wrap" lineNumbers="true" %}
```python
array = [[0 for _ in range(100)] for _ in range(100)]

n = int(input().strip())
for _ in range(n):
    x1, x2, y1, y2 = map(int, input().split())
    for i in range(x1, x2):
        for j in range(y1, y2):
            array[i][j] = 1

print(sum(row.count(1) for row in array))
```
{% endcode %}

</details>
