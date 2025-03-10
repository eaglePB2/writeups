---
icon: memo
description: >-
  https://www.hackerrank.com/contests/codenection-2024-preliminary-round-open-category/challenges/cn24-7/problem
---

# Codey and Manuscript

## Question

Codey, a scholar from the kingdom of CodeNection, has been given an important mission by Queen Zoey. Queen Zoey recently uncovered an ancient manuscript that holds a string `s`, believed to contain a hidden message about the future king of the kingdom. However, parts of the manuscript are missing, with these gaps **marked by `*`** where letters once were.

To help restore the message, Queen Zoey gives Codey another string `v`, which is known to be part of the hidden message. Codey’s task is to determine whether it is possible to fill the gaps in `s` with lowercase English letters such that `v` appears as a **subsequence** of the `s`.

Codey must report back to Queen Zoey about his progress.

_A string `b` is subsequence of string `a` if it's possible to remove some character in `a` to get `b`(without changing the order)._

### Input Format

The first line contains a single integer `t`, where `t` represents the number of test cases.

The first line of each test case contains a single string `s`, where `s` represents the damaged manuscript. It contains lowercase English letters and `*`.

The second line of each test case contains a single string `v`, where `v` represents the hidden message that must appear as a subsequence in the completed manuscript.

### Constraints

$$
1 \le t \le 100
$$

$$
1 \le |s| \le 10^5
$$

$$
1 \le |v| \le |s|
$$

It is guaranteed that the sum of $$|s|$$ across all test cases doesn't exceed $$2 * 10^5$$.

### Output Format

For each test case, if it’s possible to fulfill the conditions, output `YES`. Otherwise, output `NO`.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
3
co**y
codey
ma**a
leo
z**y
o
```

#### Output

```
YES
NO
YES
```

#### Explanation

In the first test case, the missing characters `*` can be replaced with `d` and `e` to form `codey`.

In the second test case, it's impossible to fill in the gaps to form `leo`.

In the third test case, one of the missing character `*` can be replaced with `o`.
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - 2 pointers</summary>

This one is actually simple if you know 2 pointers technique.\
If someone doesn't know, here how it goes:

1. Prepare 2 arrays, which is for u and v.
2. Prepare 2 pointers on each array, and set it on first char.
3. Check first array pointers,
   1. if the current char on first array == char on second array, second array moves 1 step.
   2. if the current chat on first array == '\*', second array moves 1 step.
4. After checking, first array moves 1 step, rinse and repeat.
5. The checking ends when it hits one of two conditions:
   1. If second array finished traversing first, print "YES".
   2. If first array finished traversing first, print "NO".
   3. If both finished at the same time, second array takes precedence.

That's all for theory, time to coding!

{% code overflow="wrap" lineNumbers="true" %}
```python
def compare_words(word1, word2):
    p1, p2 = 0, 0
    n1, n2 = len(word1), len(word2)
    
    while p1 < n1 and p2 < n2:
        if word1[p1] == word2[p2] or word1[p1] == '*':
            p2 += 1
        p1 += 1
    return "YES" if p2 == n2 else "NO"

t = int(input().strip())
for a0 in range(t):
    m = input().strip()
    n = input().strip()
    print(compare_words(m, n))
```
{% endcode %}

</details>
