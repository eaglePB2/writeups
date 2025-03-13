---
icon: arrows-repeat
description: >-
  https://www.hackerrank.com/contests/codenection-2021-open-category-preliminary/challenges/did-they-cheat
---

# Did they cheat?

## Question

The students of Dr. Kyle have submitted a unique string that Dr. Kyle gave them for homework. He is checking the strings of student A and student B which are denoted as A and B. Dr. Kyle wants to find out if they copied each other's work. If the string A can be transformed into string B with rotations, it'll be obvious to Dr. Kyle that they have cheated.

### Input Format

A\
B

### Constraints

$$
2 \le |A| \le 100
$$

$$
|A| = |B|
$$

### Output Format

Output `Yes` if they cheated, `No` if they did not.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
kyoto
tokyo
```

#### Output

```
Yes
```

#### Explanation

The rotation is defined as follows:

Before: $$A=A_1A_2...A_{|A|}$$ (example: abc)\
After: $$A=A_{|A|}A_1A_2...A_{|A|-1}$$ (example: cab)
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Trivial</summary>

This is trivial, all you need is to add text1 twice, with simple if the text2 is in text1.

```python
word1 = input()
word2 = input()

if word2 in (word1 + word1):
    print("Yes")
else:
    print("No")
```

</details>
