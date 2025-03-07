---
description: >-
  https://www.hackerrank.com/contests/codenection-2023-final-round-closed-category/challenges/cn-c13
icon: school
---

# Codey and School Supplies

## Question

As a new semester begins, Codey, a dilligent student, steps into a local stationery shop, ready to assemble a complete set of school supplies for its upcoming academic journey. Codey requires three essential school supplies: an eraser denoted as `A`, a pencil denoted as `B`, and a ruler denoted as `C`. The stationery shop offers `n` sets of school supplies, each with its own price, $$a_i$$ and contents, $$b_i$$.

Codey can purchase multiple sets of school supplies, and its goal is to find the **minimum** total cost to obtain **at least** one eraser, one pencil, and one ruler. Can you assist Codey in finding the minimum total cost to acquire at least one of each of the required school supplies (eraser, pencil, and ruler) from the stationery shop?

### Input Format

The first line contains an integer `n`, which represents the number of sets of school supplies offered in the stationery shop.

The second lines contain an integer $$a_i$$ and a string $$b_i$$,where $$a_i$$ represents the price of the $$i$$-th set of school supplies, and $$b_i$$ represents the contents of the school supplies set.

### Constraints

$$
1 \le n \le 10^3
$$

$$
0 \le a_i \le 10^3
$$

String $$b_i$$ consists of 1 to 3 characters, with the only valid characters being `A`, `B` and `C`. The arrangement of letters within string $$b_i$$ is random.

### Output Format

Output the minimum cost that Codey needs to obtain at least an eraser, a pencil, and a ruler. If there is no way to obtain at least one of each of the three items, output $$-1$$.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
3
10 CBA
5 BC
3 A
```

#### Output

```
8
```

#### Explanation

Codey can acquire the 2nd, and 3rd school supplies sets by spending $$5+3=8$$, thus obtaining all three items. This is a better choice compared to obtaining the 1st set.
{% endtab %}

{% tab title="Input 1" %}
#### Input

```
2
5 B
3 C
```

#### Output

```
-1
```

#### Explanation

Codey is unable to obtain all three items, since there is no school supplies set containing `A` - an eraser.
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution 1 - Brute Force</summary>

Since there's only like, 7 possibilities, it is possible to brute force all of them.

First, let's set the result to infinity. then brute force through all the possibilities to get minimum cost of A, B and C. Then you have got the answer.

Sounds similar to Dijkstra algorithm in brute force mode.

Here's the code for full details.

```python
min_cost = {
    "A": float("inf"),
    "B": float("inf"),
    "C": float("inf"),
    "AB": float("inf"),
    "AC": float("inf"),
    "BC": float("inf"),
    "ABC": float("inf"),
}

t = int(input().strip())

for _ in range(t):
    line = input().strip()
    n, keys = line.split()
    n = int(n)
    combination = "".join(sorted(keys))
    if combination in min_cost:
        min_cost[combination] = min(min_cost[combination], n)

result = float("inf")

if min_cost["A"] != float("inf") and min_cost["B"] != float("inf") and min_cost["C"] != float("inf"):
    result = min(result, min_cost["A"] + min_cost["B"] + min_cost["C"])

if min_cost["AB"] != float("inf") and min_cost["C"] != float("inf"):
    result = min(result, min_cost["AB"] + min_cost["C"])
if min_cost["AC"] != float("inf") and min_cost["B"] != float("inf"):
    result = min(result, min_cost["AC"] + min_cost["B"])
if min_cost["BC"] != float("inf") and min_cost["A"] != float("inf"):
    result = min(result, min_cost["BC"] + min_cost["A"])

if min_cost["ABC"] != float("inf"):
    result = min(result, min_cost["ABC"])

if min_cost["AB"] != float("inf") and min_cost["AC"] != float("inf"):
    result = min(result, min_cost["AB"] + min_cost["AC"])
if min_cost["AB"] != float("inf") and min_cost["BC"] != float("inf"):
    result = min(result, min_cost["AB"] + min_cost["BC"])
if min_cost["AC"] != float("inf") and min_cost["BC"] != float("inf"):
    result = min(result, min_cost["AC"] + min_cost["BC"])

if result == float("inf"):
    print(-1)
else:
    print(result)
```

Note that depends on the time left during the competition, Solution 2 may be more viable for you.

</details>

<details>

<summary>Solution 2 - Dynamic Programming</summary>

Brute force is not my style, let's do DP!

First, we can map all the possibilities (A, B, C) into 3 slot binaries, which we will mark it as follows:

* \<No Key> - 0 - 000
* A - 1 - 001
* B - 2 - 010
* C - 4 - 100

Then, we will have a series of combination, which can be easily labeled by using binary additions. Such as:

* AB -> 1 + 2 = 011
* BC -> 2 + 4 = 110
* ABC -> 1 + 2 + 4 = 111

Lastly, find the shortest cost based on DP numbers, by comparing the minimum between previous found with current found, and the answer should come out.

Here's the code in advance:

```python
def min_cost_to_get_keys(t, offers):
    dp = [float("inf")] * 8
    dp[0] = 0

    for n, keys in offers:
        mask = 0
        if 'A' in keys:
            mask |= 1
        if 'B' in keys:
            mask |= 2
        if 'C' in keys:
            mask |= 4 

        for prev_mask in range(8):
            new_mask = prev_mask | mask
            dp[new_mask] = min(dp[new_mask], dp[prev_mask] + n)

    if dp[7] != float("inf"):
        return dp[7]  
    else: 
        return -1

t = int(input().strip())
offers = []
for _ in range(t):
    line = input().strip()
    n, keys = line.split()
    offers.append((int(n), keys))

print(min_cost_to_get_keys(t, offers))
```

Note that this code even works when the question introduces "D" - Just extend the slot into 4 digits binary, range to 16, dp\[15] max and we are good to go.

</details>
