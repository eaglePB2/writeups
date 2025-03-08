---
icon: pizza-slice
description: >-
  https://www.hackerrank.com/contests/codenection-2021-open-category-finals/challenges/thank-you-pizza
---

# Thank You Pizza

## Question

Thank you everyone for joining. You all deserve a virtual pizza (because we're too broke to buy real pizzas). We want to make sure all of you get even numbers of pizza slices. We know that the number of participants at this final will be A or B. Help us determine the minimum number of pizza slices we need to order so that the slices can be evenly distributed to everyone in both cases.

### Input Format

A, B

### Constraints

$$
0 \le A, B \le 10^{5}
$$

### Output Format

A single integer, the number of slices we need to order.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
2 3
```

#### Output

```
6
```

#### Explanation

When we have six slices, each of you can take three pieces if we have two participants, and each participant can take two if we have three participants.
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - LCM</summary>

By appling the LCM to both inputs, we can guaranteed to get the number of slices which can suffice both of the situation.

And the solution is here:

```python
import math
print(math.lcm(*map(int, input().split())))
```

Note that "\*" means unpack. If math.lcm is not supported, here's alternative solution:

```python
import math
a, b = map(int, input().split())
print(abs(a*b) // math.gcd(a, b))
```

</details>
