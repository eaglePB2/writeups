---
description: >-
  https://www.facebook.com/codingcompetitions/hacker-cup/2011/round-1a/problems/A
icon: input-numeric
---

# Diversity Number

## Question

Let's call a sequence of integers $$a_1,a_2,...,a_N$$ _almost monotonic_ if first <kbd>K</kbd> elements are non-decreasing sequence and last $$N-K+1$$ elements are non-increasing sequence: $$a_1\le a_2≤...≤a_K$$ and $$a_K≥a_{K+1}≥...≥a_N$$.

The _diversity number_ of a sequence $$a_1,a_2,...,a_N$$ is the number of possible sequences $$b_1,b_2,...,b_N$$  for which $$0≤b_i<a_i$$ and all of the numbers $$b_1,b_2,...,b_N$$ are different. The diversity number of an empty sequence is 1.

You need to find the sum of the diversity numbers of all almost monotonic subsequences of a sequence. Since this number can be very large, find it modulo $$10^9+7$$. A subsequence is a sequence that can be obtained from another sequence by deleting some elements without changing the order of the remaining elements. Two sequences are considered different if their lengths differ or there is at least one position at which they differ.

### Input Format

The first line of the input file consists of a single number <kbd>**T**</kbd>, the number of test cases. Each test case consists of a number <kbd>**M**</kbd>, the number of elements in a sequence, followed by <kbd>**M**</kbd> numbers <kbd>**n**</kbd>, elements of some sequence (note that this sequence is not necessarily _almost monotonic_). All tokens are whitespace-separated.

### Constraints

$$
T = 20
$$

$$
1 \le M, n \le 100
$$

### Output Format

Output T lines, with the answer to each test case on a single line.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
5
1
1
2
2 1
3
1 3 2
4
1 3 1 2
4
2 3 4 3
```

#### Output

```
2
5
15
17
80
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution</summary>



</details>
