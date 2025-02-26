---
description: https://codeforces.com/group/cRJbcAFEwS/contest/485694/problem/C
icon: c
cover: ../../../.gitbook/assets/image (15).png
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

# Rankings Order

## Question

Abby and Cody want to make a new website called Abakoda, where beginner programmers can join friendly programming contests and improve their skills.

Now they are working on displaying the contest rankings. They need to display the contestants ordered by rank.

| Name      | Total | A   | B   | K   | D   |
| --------- | ----- | --- | --- | --- | --- |
| Abby      | 400   | 100 | 100 | 100 | 100 |
| Cody      | 300   | 100 | 100 | 100 | 0   |
| Aba       | 200   | 100 | 0   | 100 | 0   |
| Koda      | 100   | 100 | 0   | 0   | 0   |
| Solved By |       | 4   | 2   | 3   | 1   |

Abby and Cody need your help. They already wrote code that displays the name and total score of each contestant. Write a program that displays the names in order, from highest to lowest score. Ties are broken by alphabetical order: the contestant whose name comes first by alphabetical order gets shown first.

## Input Format

The input contains several lines.

The first line of input contains one integer $$n$$n, the number of contestants.

This is followed by $$n$$n lines of input. Each of these lines contains a name and a score, separated by a space, representing the name and score of a single contestant. The name contains only lowercase English letters, no spaces, and no punctuation marks. Each name contains at least one letter. The score is one of the following: $$0$$, $$100$$, $$200$$, $$300$$, or $$400$$.

## Constraints

$$
1 \le n \le 10^5
$$

* No two contestants have the same name.
* The length of each name does not exceed 10.

## Output Format

Your program must print $$n$$ lines of output. Each line must contain a name and a score, in that order, separated by a space. These lines must contain the same data as in the input but in the right order.

## Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
4
aba 200
abby 400
koda 100
cody 300
```

#### Output

```
abby 400
cody 300
aba 200
koda 100
```

#### Explanation:

In the first sample test case, there are four contestants.

* Contestant aba has 200 points.
* Contestant abby has 400 points.
* Contestant koda has 100 points.
* Contestant cody has 300 points.

They should appear in the rankings in the following order:

1. abby
2. cody
3. aba
4. koda
{% endtab %}

{% tab title="Input 1" %}
#### Input

```
2
cody 400
abby 400
```

#### Output

```
abby 400
cody 400
```

#### Explanation

Note that ties are broken by alphabetical order.
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution — Simple ranking with lambda</summary>

T~~he difficulty spikes upward that requires lambda function to solve wtf~~

We can know that this is a double-sorting system, which scores takes precedence, and the letter next.

By looping and doing some simple iteration sorting, this coding should be done in no issue.

Here's the solution:

```python
counter = int(input())
score_list = {}

for i in range(0, counter):
    name, score = input().split()
    score = int(score)
    if name in score_list and score_list[name] < score:
        score_list[name] = score
    elif name not in score_list:
        score_list[name] = score

sorted_scores = sorted(score_list.items(), key=lambda x: (-x[1], x[0]))

for name, score in sorted_scores:
    print(name, score)
```

</details>

