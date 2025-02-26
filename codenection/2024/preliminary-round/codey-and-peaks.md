---
description: >-
  https://www.hackerrank.com/contests/codenection-2024-preliminary-round-open-category/challenges/cn24-15
icon: mountain
---

# Codey and Peaks

## Question

Codey is about to explore the legendary Code Mountain, a famous destination for touching grass.

Code Mountain is a one-dimensional mountain made up of `n` units, which can be represented by an array `a` of length `n`, where $$a_i$$ is the height of the $$i$$-th unit. What's special about this mountain is that it is known to have **only two peaks**. Formally, there are only two values of $$a_i$$ (where $$1 \lt i \lt n$$) such that $$a_{a-1} \lt a_i > a_{i+1}$$.

Unfortunately, Codey only knows the heights of the two peaks, while the heights of the remaining units are denoted by $$-1$$. Help Codey figure out how many possible combinations of the array `a` exist modulo $$10^9 + 7$$, so that he can better prepare for the exploration.

**You can assure the max height for each unit is** $$10^5$$.

### Input Format

The first line contains an integer `n`, which represents the number of units in the Code Mountain.

The second line contains `n` integers, $$a_1, a_2, ..., a_n$$ each representing the height of the $$i$$-th unit.

### Constraints

$$
5 \le n \le 10^5
$$

$$
2 \le a_i \le 10^5 | a_i = -1
$$

* Only two $$a_i \ne -1$$, where $$1 \lt i \lt n$$

### Output Format

Output the total number of combinations of the array `a` that fulfill the conditions modulo $$10^9 + 7$$.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
5
-1 2 -1 2 -1
```

#### Output

```
1
```

#### Explanation

The only combination is $$[1,2,1,2,1]$$
{% endtab %}

{% tab title="Input 1" %}
#### Input

```
8
-1 -1 3 -1 -1 -1 3 -1
```

#### Output

```
2800000
```

#### Explanation

Some of the possible combinations for this test case include:

* $$[10^5,2,3,2,1,1,3,1]$$
* $$[1,2,3,1,1,1,3,2]$$
* $$[2,2,3,2,2,2,3,2]$$
{% endtab %}
{% endtabs %}

***

<details>

<summary>WIP - Slice into 3 parts</summary>

WIP

</details>
