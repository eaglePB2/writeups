---
description: https://codeforces.com/group/cRJbcAFEwS/contest/487230/problem/A
icon: a
cover: ../../../.gitbook/assets/image.png
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

# Abakoda Letters

## Question

Abby was thinking about how wonderful the Abakada is. The Abakada is so wonderful that the Abakoda contest problems use the four letters A, B, K, D. Let's call these four the Abakoda letters. On second thought, Abby decides that their lowercase forms are also Abakoda letters.

The problem is straightforward. Given a single English letter, help Abby determine if it is an Abakoda letter.

## Input Format

Input consists of a single line, containing a single English letter <kbd>c</kbd>.

## Constraints

* It is guaranteed that <kbd>c</kbd> is either an upper or lowercase English letter.

## Output Format

Output a single line containing the answer.

* If <kbd>c</kbd> is an Abakoda letter, output `Abakoda`
* If not, output `Boring`

## Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
A
```

#### Output

```
Abakoda
```
{% endtab %}

{% tab title="Input 1" %}
#### Input

```
d
```

#### Output

```
Abakoda
```
{% endtab %}

{% tab title="Input 2" %}
#### Input

```
Q
```

#### Output

```
Boring
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution — Trivial</summary>

Similar to round 1, trivial, check-in purposes.

This time I use the string-char slice method to minimize the speedup process.

Here's the solution:

```python
har = input().lower()

for i in 'abkd':
    if char == i:
        print('Abakoda')
        exit(0)

print('Boring')

```

</details>

