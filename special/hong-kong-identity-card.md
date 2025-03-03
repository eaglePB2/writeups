---
description: 'Difficulty: Basic'
---

# Hong Kong Identity card

## Question

The Hong Kong Identity Card consists of 1 English letter and 6 numeric digits.\
A check digit, which could be 0 to 9 or A, is appended in brackets.\
It is calculated as follows:

* For letters, A is converted to value 1, B to value 2, and so on.
* For every HKID number $$LD_1D_2D_3D_4D_5D_6$$, the sum is $$S= 8L + 7D_1 + 6D_2 + 5D_3 +4D_4 + 3D_5 +2D_6$$.
* The check digit c shall be the smallest non-negative integer such that $$(s + c)\%11=0$$. If c is 10, A is used instead.

Write a program to determine if the Identity Card is valid.

### Input Format

A line which consists the format $$LD_1D_2D_3D_4D_5D_6(c)$$.

### Constraints

$$
A \le L \le Z
$$

$$
0 \le D_1,D_2,...D_6\le9
$$

### Output Format

Output 'YES' if the card is valid, otherwise, output 'NO'.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
A123456(3)
```

#### Output

```
True
```
{% endtab %}

{% tab title="Input 1" %}
#### Input

```
C876300(0)
```

#### Output

```
false
```
{% endtab %}
{% endtabs %}

<details>

<summary>Solution </summary>



</details>
