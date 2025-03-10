---
description: >-
  https://www.facebook.com/codingcompetitions/hacker-cup/2011/final-round/problems/A
icon: alien
---

# Alien Game

## Question

Aliens on the Unknown planet have a tradition of playing a game called Loiten. It is played by two players who alternate turns. There are **N** buckets with apples standing in one line in front of the players. They are numbered from left to right with integers starting from 1.

In one turn a player can select one of the buckets, which is not the first and not the last and has a positive number of apples in it and move all of that bucket's apples to the bucket adjacent to the left and at the same time move all of them to the bucket adjacent to the right. That's right, the number of apples can be negative as it is a really strange planet. Thus, if there are 3 consecutive buckets with the number of apples being **x**, **y**, **z**, then you can perform the move if **y** is greater than zero. The resulting capacity of the buckets will be as follows: **x+y**, **-y**, **z+y**. The first player who can't make a move loses.

You happen to know one of the aliens from the Unknown planet, named Popo. He is a very good Loiten player and has reached the Loiten Finals. On the day prior to the game, he found out the number of apples in each of the buckets. Unfortunately, his memory is not that good, and he can't remember the number of apples in the **P**-th bucket. He just remembers that it is a number with absolute value not greater than **F**.

Now, he is asking you to help him to calculate his chances. The players at the Finals are so good that they only make optimal moves to maximize their chance of winning. If neither player can win, the game is considered a draw. You are to find the number of possible apples counts for the bucket with an unknown number of apples where Popo will win. Popo is also sure that he is the one to make the first turn.

### Input Format

The first line of the input file consists of a single number **T**, the number of test cases. Each test case begins with a line containing two integers **N**, the number of buckets and **P**, the number of the bucket with the unknown amount of apples. It is followed by a line containing **N** integers, the numbers of apples in the corresponding buckets. The **P**th number on this line is the positive integer **F** and corresponds to the constraint on the number of apples in the **P**-th bucket.

### Constraints

$$
T = 50
$$

$$
1≤ P ≤ N ≤ 2,000
$$

$$
1≤ F ≤10^{12}
$$

* The number of apples in each bucket at the start of the game has an absolute value not greater than $$10^{12}$$.

### Output Format

Output **T** lines, with the answer to each test case on a single line, the number of possible values for unknown bucket.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
5
3 2
1 2 3
3 2
-2 1 -1
4 2
4 3 2 1
4 3
1 -2 3 -4
5 3
1 2 2 4 -1
```

#### Output

```
2
1
5
2
2
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution</summary>



</details>
