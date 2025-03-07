---
description: >-
  https://www.hackerrank.com/contests/codenection-2023-final-round-open-category/challenges/cn-c18
icon: gratipay
---

# Codey and Zoey

## Question

Codey came to realize that there was something far more profound than simply solving problems, and that was the power of love. On this particular day, Codey decided to go on a date with Zoey.

The two of them found themselves at the origin $$(0,0)$$ of a 2D grid, with their romantic destination set at $$(n,m)$$ (cell in the `n`-th row and `m`-th column). Zoey, a fellow enthusiast for problem-solving, had no intention of making this date a walk in the park. She wanted to put Codey to the test to see if he was truly the one.

So, Zoey asked Codey to find the total number of ways for both of them to reach the destination $$(n,m)$$ from the origin $$(0,0)$$ while **intersecting** exactly `k` times modulo $$10^9 + 7$$, all while meeting the following conditions:

* They both take the shortest path.
* They move one step at a time.
* They cannot stop along the way.

Codey is eager to impress Zoey, but once again, it finds itself stuck on this problem. It requires your assistance in finding the number requested by Zoey. Help poor Codey out! Recall that `a` modulo `b` is the remainder of `a` when divided by `b`.

### Input Format

The first line contains three positive integers `n`, `m`, `k`, which represent the destination of Codey and Zoey and the total number of intersections.

### Constraints

$$
n, m \in \{n, m | 0 \le n, m \le 50, (n, m) \ne (0,0)\}
$$

$$
2 \le k \le n + m+1
$$

### Output Format

Output the total number of ways for both of them to reach the destination $$(n,m)$$ from the origin $$(0,0)$$ while intersecting exactly `k` times modulo $$10^9+7$$.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
2 2 3
```

#### Output

```
12
```

#### Explanation

One of the ways for Codey and Zoey to intersect `3` times is shown below:

<figure><img src="../../../.gitbook/assets/image (5).png" alt=""><figcaption></figcaption></figure>

The `3` intersections in this example are $$(0,0),(1,1),(2,2)$$
{% endtab %}
{% endtabs %}

***

<details>

<summary>WIP</summary>



</details>
