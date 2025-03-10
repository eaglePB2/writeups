---
icon: arrows-repeat
description: >-
  https://www.hackerrank.com/contests/codenection-2023-preliminary-round-closed-category/challenges/cn-c1
---

# Codey and CodeNection

## Question

Codey is joining CodeNection for the first time and it is loving it! Help Codey express itself by printing the string `I LOVE CODENECTION` `n` times.

### Input Format

The first line contains an integer `n`, which represents the number of times Codey wants to express love for CodeNection.

### Constraints

$$
0 \le |n| \le 10^5
$$

### Output Format

Output the string `I LOVE CODENECTION` followed by a new line for `n` times.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
2
```

#### Output

```
I LOVE CODENECTION 
I LOVE CODENECTION
```

#### Explanation

When `n` is 2, the output is the string "I LOVE CODENECTION" printed 2 times, each separated by a new line
{% endtab %}

{% tab title="Input 1" %}
#### Input

```
13
```

#### Output

```
I LOVE CODENECTION
I LOVE CODENECTION
I LOVE CODENECTION
I LOVE CODENECTION
I LOVE CODENECTION
I LOVE CODENECTION
I LOVE CODENECTION
I LOVE CODENECTION
I LOVE CODENECTION
I LOVE CODENECTION
I LOVE CODENECTION
I LOVE CODENECTION
I LOVE CODENECTION
```

#### Explanation

When `n` is 13, the output is the string "I LOVE CODENECTION" printed 13 times, each separated by a new line
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Traditional Loop</summary>

This is trivial, just loop `I LOVE CODENECTION` based on user inputs.

{% code lineNumbers="true" %}
```python
for i in range(int(input())):
    print("I LOVE CODENECTION")
```
{% endcode %}

</details>
