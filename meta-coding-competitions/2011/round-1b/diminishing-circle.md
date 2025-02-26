---
description: >-
  https://www.facebook.com/codingcompetitions/hacker-cup/2011/round-1b/problems/B
icon: spinner
---

# Diminishing Circle

## Question

**N** people are standing in circle and play following game: they start with the first person, count **K** people clockwise, then the **K**+1-th person leaves the circle and the process starts all over, using the person clockwise of the last person removed as the starting point.

For example, when **N** = 9 and **K** = 3 people would leave in following order: 4, 8, 3, 9, 6, 5, 7, 2

Given **N** and **K**, find who wins the game if counting starts with person 1. Person indices are 1-based.

The last person who is left is declared the winner.

### Input Format

The input consists of a single integer <kbd>**T**</kbd>, the number of test cases. This is followed by <kbd>**T**</kbd> pairs of numbers <kbd>**N**</kbd> and <kbd>**K**</kbd>, all separated by whitespace.

### Constraints

$$
T = 20
$$

$$
1 ≤ N ≤ 10^{12}
$$

$$
1 ≤ K ≤ 10^4
$$

### Output Format

Print **T** whitespace-separated integers, the indices for each test case of the winner of the game.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
5
9 3
4 1
3 2
5 4
6 9
```

#### Output

```
1
1
2
2
2
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution</summary>



</details>
