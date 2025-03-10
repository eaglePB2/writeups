---
description: >-
  https://www.hackerrank.com/contests/codenection-2024-final-round-closed-category/challenges/cn24-13
icon: clone
---

# Codey and Jutsu

## Question

Codey has mastered the clone jutsu recently, and it's now on a mission with its weapon to fire n aliens.

Codey creates n copies of itselves, each **positioned on the y-axis** of a 2D plane, while the  aliens are **positioned on the x-axis**. No one will be at the origin, and they can't move around. Every "Codey" should fire exactly **one** alien. If Codey at point $$(a,b)$$ uses his weapon to fire an alien at point $$(c, d)$$, the fire distance will be $$\sqrt{(a-c)^2+(b-d)^2}$$ (the distance between the points).

### Input Format

The first line contains an integer n, where n represents the number of Codey copies and aliens.

The following $$2*n$$ lines contain two space-separated integers x and y, which represent a clone or alien's position.

### Constraints

$$
1 \le n \le 10^5
$$

$$
-10^5 \le x,y\le10^5
$$

* It is guaranteed that no point is at the origin.
* It is guaranteed that the number of points on the x-axis is equal to n and the number of points on the y-axis is equal to n.

### Output Format

Output the minimal sum of all fire distances. Your answer is considered correct if its absolute or relative error does not exceed $$10^{-9}$$.

Formally, let your answer be a, and the jury's answer be b. Your answer is accepted if and only if $$\frac{|a-b|}{max(1,|b|)}\le10^{-9}$$.

To set precision when printing values you can use:

* `print(f"{distance:.9f}")` in Python;
* `std::cout << fixed << std::setprecision(9) << distance << std::endl;` in C++;
* `System.out.printf("%.9f\n", distance);` in Java;
* `console.log(distance.toFixed(9));` in JavaScript;
* `printf("%.9f\n", distance);` in C.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
2
-1 0
0 6
0 2
4 0
```

#### Output

```
9.447170528427769
```

#### Explanation

Codey(s) are at $$(0,2)$$ and $$(0,6)$$, while the aliens are at $$(-1,0)$$ and $$(4,0)$$. To minimize the total fire distance, we pair Codey 1 with Alien 1, and Codey 2 with Alien 2:

<figure><img src="../../../.gitbook/assets/image (17).png" alt=""><figcaption></figcaption></figure>

Hence, the minimum sum of all fire distances will be $$\sqrt{52} + \sqrt{5}$$.
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Distance Formula</summary>

Basically, the negative coordinates are same as positive coordinates. The first thing we can do is flip the negative jutsu and aliens onto positive side.

Then,&#x20;

Here's the code:

{% code overflow="wrap" lineNumbers="true" %}
```python
import math

n = int(input())
x_arr = [0] * n * 2
y_arr = [0] * n * 2
for i in range(n * 2):
    x, y = map(int, (input().split()))
    x_arr[i], y_arr[i] = abs(x), abs(y)

x_arr = sorted(x for x in x_arr if x != 0)
y_arr = sorted(y for y in y_arr if y != 0)

print(sum(math.sqrt((x ** 2) + (y ** 2)) for x,y in zip(x_arr,y_arr)))
```
{% endcode %}

Note that in line 13, I use the one-liner to attempt the question. If you want breakdowns, there you go:

{% code title="Start from Line 13" lineNumbers="true" %}
```python
distances = []
for x, y in zip(x_arr, y_arr):
    distance = math.sqrt((x ** 2) + (y ** 2))
    distance.append(distance)

print(sum(distances))
```
{% endcode %}

</details>
