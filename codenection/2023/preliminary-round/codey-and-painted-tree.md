---
description: >-
  https://www.hackerrank.com/contests/codenection-2023-preliminary-round-closed-category/challenges/cn-c7
icon: tree
---

# Codey and Painted Tree

## Question

Codey loves solving challenging problems, and today, Codey faces a unique task.

A tree is a connected and undirected graph without cycles. Codey is given a tree with  `n` nodes and `n-1` edges. Initially, every node in the tree is painted **white**. Codey can choose to paint some of the nodes **black**. Codey's goal is to find the number of ways to paint the tree such that, in each of these ways, the number of **unique** _b-path_ is exactly `m`. Codey is excited to tackle this problem and find a solution.

A _b-path_ is a sequence of nodes $$v_1, v_2, ..., v_k$$ ,where $$k \ge 2$$ and it follows these rules:

* Each adjacent pair of nodes in the sequence is connected by an edge.
* Each node in the sequence is **distinct**.
* It starts in a node painted **black** and ends in a node painted **black**.

Two _b-paths_ are considered **different** if the sets of nodes used in the sequence are different.

Your task is to help Codey solve this problem and output the number of valid ways to paint the tree, considering the restrictions, and then return the answer modulo $$10^9 + 7$$. Recall that `a` modulo `b` is the remainder of when `a` divided by `b`.

### Input Format

The first line contains two integers, `n` and `m`, where `n` represents the number of nodes in the tree, and `m` represents the number of _b-path_.

Then following `n-1` lines describe the tree, where each of them contain two integers `u`, `v`, which represents the endpoints of the corresponding edge.

### Constraints

$$
1 \le n \le 10^5
$$

$$
1 \le m \le 10^{18}
$$

### Output Format

Output the number of ways to paint the tree with `m` _b-path_ modulo $$10^9 + 7$$.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
3 1
1 2
2 3
```

#### Output

```
3
```

#### Explanation

One of the ways to paint the tree is as follows:

<figure><img src="../../../.gitbook/assets/image (10).png" alt=""><figcaption></figcaption></figure>

There is only `1` _b-path_ when you paint node `3` and node `1` in black, which can be represented by the sequence of nodes `[1,2,3]`. Note that _b-path_ `[1,2,3]` is the same as `[3,2,1]` since the set of nodes used in the sequence is the same.
{% endtab %}

{% tab title="Input 1" %}
#### Input

```
5 1
1 4
2 5
3 2
4 3
```

#### Output

```
10
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Haven't finish yet</summary>

\-- If you know the solution please tell me, I am not good on trees. --

</details>
