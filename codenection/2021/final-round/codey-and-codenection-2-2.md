---
description: >-
  https://www.hackerrank.com/contests/codenection-2021-open-category-finals/challenges/a-joke
icon: question
---

# A joke

## Question

Dr. Kyle is taking a test, and he thought there should definitely be an easy problem that everyone can solve. Here's the problem: Given a string S of length 6 print `Yes` or print `No`. To find out when to print what, students need to observe the test cases.

### Input Format

S

### Constraints

$$
|S| == 6
$$

### Output Format

Print the answer.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
lmaaoo
```

#### Output

```
Yes
```
{% endtab %}

{% tab title="Input 1" %}
#### Input

```
iphone
```

#### Output

```
No
```
{% endtab %}

{% tab title="Input 2" %}
#### Input

```
mommaa
```

#### Output

```
Yes
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Observation</summary>

From all test cases, we can confirm that:

if the 3rd char == 4th char, and 5th char == 6th char, print Yes. Otherwise, print No.

Let's build the answer instantly to get free marks:

```python
s = input()
if s[2] == s[3] and s[4] == s[5]:
    print("Yes")
else:
    print("No")
```

</details>
