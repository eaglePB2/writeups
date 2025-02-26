---
description: https://codeforces.com/group/cRJbcAFEwS/contest/487230/problem/B
icon: b
cover: ../../../.gitbook/assets/image (1).png
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

# Borrowed Words

## Question

Abby joined Cody and informed her friend of Abakoda letters. Cody frowned.

Abby questioned Cody about the quandary that was vexing him. "I've quite the conundrum," said Cody. "We claim that Abakoda is a contest that is culturally Pilipino... but just consider all the hiram na titik that we find ourselves exhibiting!" he exclaimed.

"Hiram na titik?" Abby asked.

"You know, borrowed letters," Cody clarified. "The letters C, F, J, Q, V, X, Z come from foreigners, not the Filipino Abakada!"

Cody quickly zeroed in on a viable conclusion. "We must raze all words that contain exotic borrowed letters! Case insensitive, of course."

Given a single word, determine whether or not it contains any hiram na titik. As a reminder, these are the letters CFJQVXZ (and their lowercase forms).

## Input Format

Input consists of a single line, containing a single word <kbd>s</kbd>.

## Constraints

* It is guaranteed that <kbd>c</kbd> is either an upper or lowercase English letter.
* Ñ / ñ are not considered as they are special characters.

$$
1 \le len(c) \le 10
$$

## Output Format

Output a single line containing the answer.

* If the word contains any hiram na titik, output `FOREIGN`
* If the word contains no hiram na titik, output `PINOY`

## Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
Pilipino
```

#### Output

```
PINOY
```
{% endtab %}

{% tab title="Input 1" %}
#### Input

```
Filipino
```

#### Output

```
FOREIGN
```

#### Explanation:

Filipino contains the hiram na titik <kbd>F</kbd>.
{% endtab %}

{% tab title="Input 2" %}
#### Input

```
anime
```

#### Output

```
PINOY
```
{% endtab %}

{% tab title="Input3" %}
#### Input

```
Rizal
```

#### Output

```
FOREIGN
```

#### Explanation

Rizal contains the hiram na titik <kbd>z</kbd>
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution — char search</summary>

Extension of problem A, but this time we need to check the whole string instead of char. Just add a for loop to break each character from the string and check if the char is in 'cfjqvxz'. If it does, it is foreign that we have no more needed to check. If the string parsed finished, then it is pinoy string.

Here's the solution:

```python
input_check = input().lower()
key = 'cfjqvxz'

for i in key:
    if i in input_check:
        print("FOREIGN")
        exit(0)

print("PINOY")

```

</details>

