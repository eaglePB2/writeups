---
icon: people-arrows
description: >-
  https://www.hackerrank.com/contests/codenection-2023-preliminary-round-closed-category/challenges/cn-c6
---

# Codey and Team Selection

## Question

Codey is a coach, and it is assembling a team for a competitive sports league. It is going to select `n` players for the team. Each player possesses a skill point represented by $$a_i$$. The player selection process consists of `n` steps, and in each step:

* Let `b` to be the sorted array of skill points for **unselected** players. Choose an integer `j`, where $$1 \le j \le k$$, and k is the current total of unselected players, that player joins the team and gains an additional skill point, $$s_j$$. In other words, the total team skill increases by $$b_j + s_j$$.

Codey wants to strategically select players to **maximize** the overall team skill for the upcoming sports league, while following the constraints of the selection process. Can you help Codey to achieve this?

### Input Format

The first line contains a single integer `n`, which represents the number of players.

The second line contains `n` integers $$a_1, a_2, ..., a_n$$, each representing the skill points of the $$i$$-th player.

The third line contains `n` integers $$s_1, s_2, ..., s_n$$, each representing the additional skill points gained for selecting the $$j$$-th player in the array `b`.

### Constraints

$$
1 \le n \le 10^5
$$

$$
1 \le a_i \le 10^5
$$

$$
1 \le s_j \le 10^k
$$

$$
1 \le a_1 \le a_2 \le ... \le a_n
$$

### Output Format

Output an integer representing the maximum total team skill.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
3
1 2 3
3 3 1
```

#### Output

```
15
```

#### Explanation

We can select the players as such:

1. The current team skill is $$0$$ and `b = [1, 2, 3]`. We choose `j = 1` and the team skill increase by $$b_1 + s_1 = 1 + 3 = 4$$.
2. The current team skill is $$0 + 4 = 4$$ and `b = [2, 3]`. We choose `j = 2` and the team skill increase by $$b_2 + s_2 = 3 + 3 = 6$$.
3. The current team skill is $$4 + 6 = 10$$ and `b = [2]`. We choose `j = 1` and the team skill increase by $$b_1 + s_1 = 2 + 3 = 5$$.
4. All players are selected, selection ended. The total team skill is $$0 + 4 + 6 + 5 = 15$$.
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Question is Confusing</summary>

This question is so confusing that I couldn't finish at the competition QAQ

After been three days of reading, finally I get it how the coach selects the players. Here's the details:

* Each player position affects how many skill points, sj, can be chosen.
  * For example, player\[0] can only choose s\[0], player\[1] can choose between s\[0] and s\[1], and so on.

Which means, we had to do two loops which:

1. loop through players and indexes
2. find the maximum skill points that player can get based on the position of player.

But this will get a **time limit exceeded**, as the array is large enough to cough the program out of time.

One way I thought to optimize it is by **memorization**, which is to by memorize the current maximum value from that array, next time only need to compare that max with the next index cell.

And not surprising, memorization works and passed all test cases!

Here's my code:

{% code overflow="wrap" lineNumbers="true" %}
```python
t = int(input().strip())
arr1 = list(map(int, input().strip().split()))
arr2 = list(map(int, input().strip().split()))

max_cache = 0
total = 0

for i, x in enumerate(arr1):
    max_cache = max(max_cache, arr2[i])
    total += x + max_cache

print(total)
```
{% endcode %}

</details>
