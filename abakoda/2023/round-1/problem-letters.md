---
description: https://codeforces.com/group/cRJbcAFEwS/contest/485694/problem/A
icon: a
cover: ../../../.gitbook/assets/image (13).png
coverY: 0
layout:
  cover:
    visible: true
    size: hero
  title:
    visible: true
  description:
    visible: true
  tableOfContents:
    visible: true
  outline:
    visible: true
  pagination:
    visible: true
---

# Problem Letters

## Question

Abby and Cody want to make a new website called Abakoda, where beginner programmers can join friendly programming contests and improve their skills.

Now they are working on displaying the contest rankings. They need to show the problem letters on the top of each column of the rankings table. In Abakoda, the first four letters of the alphabet are A, B, K[^1], and D. Therefore, these will be the problem letters shown on the columns, from left to right.

| Name | A   | B   | K   | D   |
| ---- | --- | --- | --- | --- |
| Aba  | 100 | 0   | 100 | 0   |
| Abby | 100 | 100 | 100 | 100 |
| Koda | 100 | 0   | 0   | 0   |
| Cody | 100 | 100 | 100 | 0   |

Abby and Cody need your help. Write a program that takes an integer $$n$$ between $$1$$ to $$4$$ and prints out the letter that should be shown on top of the $$n$$-th column from the left in the rankings table.

## Input Format

The input contains only one line. This line contains one integer <kbd>n</kbd>.

## Constraints

$$
1 \le n \le 4
$$

## Output Format

Your program must output a capital English letter, which is the letter that should be shown on top of the $$n$$th column.

## Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
1
```

#### Output

```
A
```
{% endtab %}

{% tab title="Input 1" %}
#### Input

```
2
```

#### Output

```
B
```
{% endtab %}

{% tab title="Input 2" %}
#### Input

```
4
```

#### Output

```
D
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution — Trivial</summary>

This question is trivial that I treat that as a check-in test instead.

Since it only has 4 values, we can simply use dictionary method to write all the possibilities, and just print the value based on the key user input.

Here's the solution:

```python
thisdict = {
  "1":"A",
  "2":"B",
  "3":"K",
  "4":"D"
}

print(thisdict[input()])
```

</details>



[^1]: They don't like it that Codeforces forces the third problem letter to be C.
