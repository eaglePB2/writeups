---
description: >-
  https://www.hackerrank.com/contests/codenection-2021-open-category-finals/challenges/ways-1-1
icon: pipe
---

# Ways 1

## Question

There is a wire of integer length lying flat. We will cut this wire at 11 integer positions to divide it into 12 smaller wires. Here, each of the 12 resulting wires must have a positive integer length. Find the number of ways to do this division. It can be proved that the answer is less than $$2^{63}$$.

### Input Format

L

### Constraints

$$
12 \le L \le 200
$$

### Output Format

A single interger, the number of ways to divide the wire.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
12
```

#### Output

```
1
```
{% endtab %}

{% tab title="Input 1" %}
#### Input

```
13
```

#### Output

```
12
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Stars and Bars Problem</summary>

A typical stars and bars problem. A simple combinatorial calculation $$\binom{n-1}{11}$$ is enough to suffice the conditions.

Here's the solution:

```python
from math import comb
print(comb(int(input())-1, 11))
```

</details>
