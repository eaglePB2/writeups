---
description: >-
  https://www.hackerrank.com/contests/codenection-2023-preliminary-round-open-category/challenges/cn-c8
icon: people-robbery
---

# Codey and Crimes

## Question

One night, Codey found itself at a 7-11 convenience store, faced with the desire to purchase `n` items. Each item took $$a_i$$ seconds to process, and they were priced at $$b_i$$ ringgit(s). It was a challenging time for Codey, and its funds were tight, barely enough to afford all `n` items. Unfortunately, Codey made a regrettable decision that night: it chose to steal.

Here's what it did: For each second the cashier took to process one of their items, Codey managed to steal another item without paying for it. Its goal was to acquire all `n` items and **save as much money as possible**.

Now, as Codey reflects on their actions, it wants to know the total amount it ultimately ended up paying that night. Can you help Codey recall the cost of its choices?

### Input Format

The first line contains an integer `n`, where `n` represents the number of items Codey purchased.

The following `n` lines describe each item, where each of them contains two integers $$a_i, b_i$$, which represents the time it takes to process item `i`, and the price of item `i`, respectively.

### Constraints

$$
1 \le n \le 2 *10^3
$$

$$
1 \le a_i \le 2 *10^3
$$

$$
1 \le b_i \le 10^9
$$

### Output Format

Output a single integer representing the total amount that Codey ultimately ended up paying at the end of the night.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
3
5 50
2 10
1 20
```

#### Output

```
10
```

#### Explanation

Codey bought the second item, which cost him `10` ringgits, and it took `2` seconds to process it. During these `2` seconds, Codey stole all the remaining items.
{% endtab %}

{% tab title="Input 1" %}
#### Input

```
5
0 30
0 123
8 30
2 100
1 100
```

#### Output

```
30
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution 1 - Greedy Algorithm</summary>



</details>

<details>

<summary>Solution 2 - A* Algorithm</summary>



</details>
