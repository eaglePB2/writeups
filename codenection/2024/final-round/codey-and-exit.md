---
description: >-
  https://www.hackerrank.com/contests/codenection-2024-final-round-closed-category/challenges/cn24-2/problem
icon: person-running
---

# Codey and Exit

## Question

Codey is in its bedroom, standing at point $$(a,b)$$ on a 2D grid, and the door is located at some point $$(x, y)$$. Codey has four possible moves:

* Move up -> Moves from $$(a, b)$$ to $$(a, b+1)$$
* Move down -> Moves from $$(a, b)$$ to $$(a, b-1)$$
* Move left -> Moves from $$(a, b)$$ to $$(a-1, b)$$
* Move right -> Moves from $$(a, b)$$ to $$(a+1, b)$$

Codey needs your help to find the minimum number of moves required to reach the exit.

### Input Format

The first line contains two integers `a` and `b`, which represents the coordinate of Codey.

The second line contains two integers `x` and `y`, which represents the coordinate of the door.

### Constraints

$$
1 \le a, b, x, y \le 10^5
$$

### Output Format

Output the minimum number of moves required for Codey to reach $$(x, y)$$ from $$(a, b)$$

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
1 1
2 2
```

#### Output

```
2
```

#### Explanation

Codey can take following steps to exit:

<figure><img src="../../../.gitbook/assets/image (6).png" alt=""><figcaption></figcaption></figure>

Therefore, the minimum number of moves required is 2.
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Ignore Question Please</summary>

The whole question is set up to confuse you, let me explain it into simple words:

_Given start coordinates and end coordinates, you can only walk horizontal and vertical, find the minimum steps to reach from start to end._

By using simple math and logic, we know that the minimum steps given the restriction above is the sum of the x-steps + y-steps.

The way to find those 2 steps count (x-axis, y-axis) is `destination coordinates - start coordinates`. Simple enough.

One thing had to reminder; don't forget to add absolute symbols (In python, it is `abs()`). Since you may have to walk left and down to reach the destination, therefore should drop the negative symbol before adding together to get the minimum distance.

Here's my solution:

```python
x1, y1 = map(int, input().strip().split())
x2, y2 = map(int, input().strip().split())

print((abs(x2-x1) + abs(y2-y1)))
```

</details>
