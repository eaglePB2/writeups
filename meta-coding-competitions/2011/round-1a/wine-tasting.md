---
icon: wine-glass
description: >-
  https://www.facebook.com/codingcompetitions/hacker-cup/2011/round-1a/problems/C
---

# Wine Tasting

## Question

A group of Facebook employees just had a very successful product launch. To celebrate, they have decided to go wine tasting. At the vineyard, they decide to play a game. One person is given some glasses of wine, each containing a different wine. Every glass of wine is labelled to indicate the kind of wine the glass contains. After tasting each of the wines, the labelled glasses are removed and the same person is given glasses containing the same wines, but unlabeled. The person then needs to determine which of the unlabeled glasses contains which wine. Sadly, nobody in the group can tell wines apart, so they just guess randomly. They will always guess a different type of wine for each glass. If they get enough right, they win the game. You must find the number of ways that the person can win, modulo 1051962371.

### Input Format

The first line of the input is the number of test cases, <kbd>**N**</kbd>. The next <kbd>**N**</kbd> lines each contain a test case, which consists of two integers, <kbd>G</kbd> and <kbd>C</kbd>, separated by a single space. <kbd>G</kbd> is the total number of glasses of wine and <kbd>C</kbd> is the minimum number that the person must correctly identify to win.

### Constraints

$$
N = 20
$$

$$
1 \le C \le G \le 100
$$

### Output Format

For each test case, output a line containing a single integer, the number of ways that the person can win the game modulo 1051962371.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
5
1 1
4 2
5 5
13 10
14 1
```

#### Output

```
1
7
1
651
405146859
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution — Permutation, Combination, DP</summary>

The question is simply asking you a formula, which consists of following:

&#x20;$$\sum_{n=C}^{G}\frac{G!}{C!*((G-C)!)}$$, which G is total glass, and C is minimum glasses needed to correct.

One note to know that it is impossible to have cases which is $$G-C=1$$, as it is impossible to have only 1 glass of wine in wrong position.

To speed up the time complexity, Dynamic Programming can be used to break the problem into smaller repeated problems, and faster up implying the recursive part.

Here is the final solution:

```python
from math import comb, factorial

MOD = 1051962371

def exact_derangement(n):
    if n == 0: return 1
    if n == 1: return 0
    dp = [0] * (n + 1)
    dp[0], dp[1] = 1, 0
    for i in range(2, n + 1):
        dp[i] = (i - 1) * (dp[i - 1] + dp[i - 2]) % MOD
    return dp[n]

def count_winning_ways(total_boxes, min_correct):
    total_ways = 0
    for correct in range(min_correct, total_boxes + 1):
        incorrect = total_boxes - correct
        ways = (comb(total_boxes, correct) * exact_derangement(incorrect)) % MOD
        total_ways = (total_ways + ways) % MOD
    return total_ways

cases = int(input())
for i in range(1, cases+1):
	G, C = map(int, input().strip().split())
	print("Case #%d: %s" % (i, count_winning_ways(G, C)))
```

Note that it is allowed to use math library to speed up things, no need to reinvent the wheels of manually writing the `comb()` function.

The first 2 pre-defined is for avoiding calculating the $$G - C = 1$$ situation as it is impossible, and $$G - C = 0$$ has always only have 1 solution.

</details>
