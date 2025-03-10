---
icon: octopus-deploy
description: https://www.hackerrank.com/contests/codenection-2024-test/challenges/cn24-test
---

# Codey and Takoyaki

## Question

Codey runs a popular takoyaki (a Japanese octopus ball) shop. One morning, it finds `n`  customers already waiting in line, each requesting `ai` takoyaki balls. However, it hasn't started cooking any takoyaki yet.

The grill pan can cook exactly `9` takoyaki balls in one use. For efficiency, Codey always cook at full capacity whenever he uses the pan.

Assuming the number of takoyaki balls Codey have currently is `0`, what is the minimum number of times it needs to use his grill pan to fulfill all orders?

### Input Format

The first line contains a single integer `n` - the number of customers in the queue.&#x20;

The second line contains `n` space-separated integers, `a1, a2, ... , an` , where `ai` represents the number of takoyaki balls the -`i`-th customer wants to order.

### Constraints

$$
1 \le n,a_i \le 10^5
$$

### Output Format

Output a single integer, the minimum number of times Codey needs to use the grill pan to fulfill all customer orders.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
3
5 12 8
```

#### Output

```
3
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Division with ceilings</summary>

This is basically a simple math. You can complete this task by simply sum all of the second line, then divide by 9.

But in some cases, simply divide by 9 may cause the number of grills -1 than expected, this is because by the nature of the programming language, if the answer is 3.1, the answer will convert into 3 instead of 4.

Therefore, we need to add a ceil function, which rounds up in any situation to complete the task.

Here's my code below:

{% code lineNumbers="true" %}
```python
import math

t = int(input().strip())
total = sum(list(map(int, input().strip().split())))

print(math.ceil(total / 9))
```
{% endcode %}

Note that I had used the math library, and that library is normally allowed on most of the competitive programming. For other programming languages, similar libraries can be found.

</details>
