---
description: >-
  https://www.facebook.com/codingcompetitions/hacker-cup/2011/round-1c/problems/B
icon: hexagon
---

# Polynomial Factoring

## Question

A polynomial in x of degree D can be written as:

$$
a_Dx^D + a_{D-1}x^{D-1} + ... + a_1x^1 + a_0
$$

In some cases, a polynomial of degree D can also be written as the product of two polynomials of degrees $$D_1$$ and $$D_2$$, where $$D = D_1 + D_2$$. For instance,

$$
4 x^2 + 11x ^1 + 6 = (4x^1 + 3) * (1 x^1 + 2)
$$

In this problem, you will be given two polynomials, denoted F and G. Your task is to find a polynomial H such that G \* H = F, and each $$a_i$$ is an integer.

### Input Format

You should first read an integer N, the number of test cases. Each test case will start by describing F and then describe G. Each polynomial will start with its degree D, which will be followed by D+1 integers, denoting $$a_0, a_1, ... , a_D$$. Each polynomial will have a non-zero coefficient for its highest order term.

### Constraints

$$
N \le 60
$$

$$
0 ≤ D ≤ 20
$$

$$
-10000 ≤ a_i ≤ 10000
$$

### Output Format

For each test case, output a single line describing H. If H has degree $$D_H$$, you should output a line containing $$D_H+1$$ integers, starting with $$a_0$$ for H. If no H exists such that G\*H=F, you should output "no solution".

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
5
2 6 11 4
1 3 4
2 1 2 1
1 1 1
2 1 0 -1
1 1 1
1 1 1
2 1 2 1
5 1 1 1 1 1 1
3 1 1 1 1
```

#### Output

```
2 1
1 1
1 -1
no solution
no solution
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution</summary>



</details>
