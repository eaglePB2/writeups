---
description: https://codeforces.com/group/cRJbcAFEwS/contest/485694/problem/D
icon: d
cover: ../../../.gitbook/assets/image (16).png
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

# Rankings Search

## Question

Abby and Cody want to make a new website called Abakoda, where beginner programmers can join friendly programming contests and improve their skills.

Now they are working on displaying the contest rankings. They want to make a search bar, where a contestant can type their name in, and the rankings will automatically focus on their position in the rankings.

Abby and Cody need your help. In Rankings Order, you figured out together how to display the contestants in order. Now, write a program that processes several requests from contestants to find their position in the rankings.

## Input Format

The input contains several lines.

The first line of input contains one integer $$n$$n, the number of contestants.

This is followed by $$n$$n lines of input. These lines describe the rankings. These lines will be arranged according to the order described in Rankings Order. Each of these lines contains a name and a score, separated by a space, representing the name and score of a single contestant. The name contains only lowercase English letters, no spaces, and no punctuation marks. Each name contains at least one letter. The score is one of the following: $$0$$, $$100$$, $$200$$, $$300$$, or $$400$$.

This is followed by a line containing an integer $$s$$s, the number of search requests.

This is followed by $$s$$s lines of input. Each of these lines contains a name containing only lowercase English letters, no spaces, and no punctuation marks. These names are all names of contestants, which have appeared previously in the part of the input describing the rankings.

## Constraints

$$
1 \le n \le 10^5
$$

$$
1 \le s \le 10^5
$$

* No two contestants have the same name.
* The length of each name does not exceed 10.

## Output Format

Your program must print $$s$$ lines of output. Each line must contain a single integer. The $$i$$-th line of the output must contain the answer to the $$i$$-th search request in the input: the position of a contestant in the rankings. The topmost position in the rankings is position $$1$$.

## Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
4
abby 400
cody 300
aba 200
koda 100
5
aba
abby
koda
cody
koda
```

#### Output

```
3
1
4
2
4
```

#### Explanation:

In the sample test case, there are four contestants, displayed in order.

* Contestant abby has 400 points.
* Contestant cody has 300 points.
* Contestant aba has 200 points.
* Contestant koda has 100 points.

There are five requests:

* A request to find contestant aba, who is at position $$3$$.
* A request to find contestant abby, who is at position $$1$$.
* A request to find contestant koda, who is at position $$4$$.
* A request to find contestant cody, who is at position $$2$$.
* A request to find contestant koda, who is at position $$4$$.

Notice that some requests may be duplicated (when a contestant searches their name more than once).
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution — Simple ranking Pro Max+</summary>

Just a continuation of Problem C.

Now we need to create a search function to let participant get their rank.

Here's the solution, anyways:

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

ranking = {}
for i, (name, _) in enumerate(sorted_scores, start=1):
    ranking[name] = i

counter_search = int(input())
search = [None] * counter_search

for i in range(0, counter_search):
    search[i] = input()

for name in search:
    if name in ranking:
        print(ranking[name])
```

</details>

