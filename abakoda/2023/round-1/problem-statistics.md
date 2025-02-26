---
description: https://codeforces.com/group/cRJbcAFEwS/contest/485694/problem/B
icon: b
cover: ../../../.gitbook/assets/image (14).png
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

# Problem Statistics

## Question

Abby and Cody want to make a new website called Abakoda, where beginner programmers can join friendly programming contests and improve their skills.

Now they are working on displaying the contest rankings. They need to show the number of contestants who have solved each problem on the bottom of the matching column of the rankings table.

| Name      | A   | B   | K   | D   |
| --------- | --- | --- | --- | --- |
| Aba       | 100 | 0   | 100 | 0   |
| Abby      | 100 | 100 | 100 | 100 |
| Koda      | 100 | 0   | 0   | 0   |
| Cody      | 100 | 100 | 100 | 0   |
| Solved By | 4   | 2   | 3   | 1   |

Having this bottom row on the rankings can help contestants: if more people have solved a problem, it is probably easier.

Abby and Cody need your help. They already wrote code that gets which problems were solved by each contestant. Write a program that prints the number of contestants who have solved each problem.

## Input Format

The input contains several lines.

The first line of input contains one integer <kbd>n</kbd>, the number of contestants.

This is followed by $$n$$ lines of input. Each of these lines contains a string of capital letters, representing what problems were solved by a single contestant. The only letters that appear in these lines are A, B, K, or D. Each letter appears at most once in each string. The letters in a string are not necessarily arranged in alphabetical order. Each string is non-empty: every contestant solved at least one problem.

## Constraints

$$
1 \le n \le 1000
$$

## Output Format

Your program must print a single line of output containing four integers separated by spaces: the number of contestants who solved problem A, followed by the number of contestants who solved problem B, followed by the number of contestants who solved problem K, followed by the number of contestants who solved problem D.

## Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
4
AK
ABKD
A
ABK
```

#### Output

```
4 2 3 1
```

#### Explanation:

In the first sample test case, there are four contestants.

1. The first contestant solved problems A and K.
2. The second contestant solved problems A, B, K, and D.
3. The third contestant solved problem A.
4. The fourth contestant solved problems A, B, and K.

A total of $$4$$ contestants solved problem $$A$$.\
A total of $$2$$ contestants solved problem $$B$$.\
A total of $$3$$ contestants solved problem $$K$$.\
A total of $$1$$ contestant solved problem $$D$$.

Therefore, the correct output is 4 2 3 1.
{% endtab %}

{% tab title="Input 1" %}
#### Input

```
2
KAB
BDK
```

#### Output

```
1 2 2 1
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution — Frequency Checker</summary>

This question can be solved by simply using frequency counter. It works as follows:

* Create an array which has N size, which N is the unique type of items, while add 1 based on their "number", compared to their array index number.
* For sync purposes, we need to -1 on the numbers as array starts from 0, meanwhile we count distinct values from 1.
* After completing the frequency builder, the rest should be obvious.

Here's the solution:

```python
counter = int(input())
arr_list = [0] * counter
all_freq = {}

for i in range(0, counter):
    arr_list[i] = input()
    for j in arr_list[i]:
        all_freq[j] += 1

print(str(all_freq["A"]) + " " + str(all_freq["B"]) + " " + str(all_freq["K"]) + " " + str(all_freq["D"]))
```

</details>

