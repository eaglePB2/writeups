---
description: >-
  https://www.hackerrank.com/contests/codenection-2023-final-round-closed-category/challenges/cn-c10
icon: backward
---

# Codey and CodeNection 2

## Question

Codey worked really hard and its perseverance has landed it in the CodeNection Finals! Codey wishes to express its love for CodeNection, but this time, it wants you to put a clever twist. Reverse the phrase `I LOVE CODENECTION` `n` times, and print the **final string**.

### Input Format

The first line contains an integer `n`, which represents the number of times Codey wants to reverse the string `I LOVE CODENECTION`.

### Constraints

$$
0 \le |n| \le 10^{18}
$$

### Output Format

Output the string `I LOVE CODENECTION` reversed `n` times.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
3
```

#### Output

```
NOITCENEDOC EVOL I
```

#### Explanation

`I LOVE CODENECTION` is reversed 3 times.

`NOITCENEDOC EVOL I` -> `I LOVE CODENECTION` -> `NOITCENEDOC EVOL I`
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Binary Modular</summary>

Given that number 1, 3, 5, ... gives `NOITCENEDOC EVOL I`.

Given that number 2, 4, 6, ... gives `I LOVE CODENECTION`.

so, by using % 2, the answer will be either 0 or 1.

for the case number is 1, that means `I LOVE CODENECTION` will be reversed; otherwise, keep the same value.

Therefore, the solution is:

```python
string = "I LOVE CODENECTION"

t = int(input())

if t % 2 == 1:
    print(string[::-1])
else:
    print(string)
```

</details>
