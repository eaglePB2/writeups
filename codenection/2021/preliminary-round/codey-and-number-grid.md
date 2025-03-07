---
description: >-
  https://www.hackerrank.com/contests/codenection-2023-preliminary-round-open-category/challenges/cn-c17
icon: grid
---

# Codey and Number Grid

## Question

Codey finds itself in a desolate planet. The planet, shrouded in mystery, is known for its harsh, alien terrain — a place where every decision is a matter of survival. Here, in this strange land, Codey discovers a $$m * n$$ ( `n` rows and `m` columns) grid imprinted with unique numbers that seem to hold the keys to life itself.

Trapped on this planet, Codey faces a huge challenge. Its very survival depends on its ability to decipher this grid. It must uncover `k`, the **maximum** connected area within the grid that contains every number from `1` **to** `k`. Two cells can only be connected if they share an edge.

As time runs out and the situation becomes more dangerous, Codey needs your help to find `k`, the largest possible connected area `k` that meets the condition. Can you assist Codey in determining the value of `k` to survive this challenge?

### Input Format

The first line contains two integers, `n` and `m`, where `n` represents the number of rows and `m` represents the columns in the 2D grid.

The following lines contain the numbers $$a_{ij}$$ , which provides a representation of the 2D grid.

### Constraints

$$
1 \le n \le 10^3
$$

$$
1 \le m \le 10^3
$$

$$
1 \le a_{ij} \le 10^6
$$

* Every $$a_{ij}$$ is guaranteed unique.

### Output Format

Output k, the maximum connected area within the grid that contains every number from 1 to k.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
3 3
1 2 7
9 3 11
8 4 5
```

#### Output

```
5
```

#### Explanation

The representation of the grid and the highlighted maximum area is as follows:

<figure><img src="../../../.gitbook/assets/image (12).png" alt=""><figcaption></figcaption></figure>

The selected area only consists of number from 1 to 5, hence the output is 5.
{% endtab %}

{% tab title="Input 1" %}
#### Input

```
3 3
1 2 3
10 4 11
6 8 5
```

#### Output

```
4
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - BFS</summary>

This is a typical breadth-first search question.

Step 1: find the coordinates of 1.

Step 2: find the 2, then rinse and repeat.

Then I haven't finish yet lmao.

</details>
