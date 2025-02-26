---
description: >-
  https://www.hackerrank.com/contests/codenection-2024-preliminary-round-open-category/challenges/cn24-16
icon: teddy-bear
---

# Codey and Toy Kingdom

## Question

Codey bought a new set of toys, which includes islands and bridges, and wanted to build a dream toy kingdom using them.

First, Codey arranged $$2*n$$ islands in a circle, numbered from $$1$$ to $$2*n$$ in a clockwise direction, and connected each pair of adjacent islands with a bridge. Although this version of the toy kingdom allows travel between any two islands using a series of bridges, it is inefficient. To improve travel between distant islands, Codey decided to build bridges between islands that are not adjacent.

Codey used the $$n$$ remaining bridges to connect different pairs of islands. Each island will have exactly one extra bridge connected to it. For each pair of bridges that intersect, the complexity of the toy kingdom increases by $$1$$.

Help Codey determine the total complexity of the toy kingdom.

### Input Format

The first line contains an integer `n`, which there are $$2*n$$ islands.

The next `n` lines contain two space-separated integers, $$a_i$$ and $$b_i$$, representing the $$i$$-th bridge between islands $$a_i$$ and $$b_i$$.

### Constraints

$$
1 \le n \le 2*10^5
$$

$$
1 \le a_i,b_i \le 2*n
$$

* Each island will have exactly one extra bridge connected to it.

### Output Format

Output the total complexity of the toy kingdom.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
3
1 3
2 5
4 6
```

#### Output

```
2
```

#### Explanation

![](<../../../.gitbook/assets/image (11).png>)

The total complexity is `2` because the following pairs of bridges intersect:

* $$(4, 6)$$ and $$(2, 5)$$
* $$(1, 3)$$ and $$(2, 5)$$
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - WIP</summary>

WIP, haven't start yet.

</details>
