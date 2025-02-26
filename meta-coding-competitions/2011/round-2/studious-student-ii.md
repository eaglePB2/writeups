---
description: https://www.facebook.com/codingcompetitions/hacker-cup/2011/round-2/problems/C
icon: book-arrow-up
---

# Studious Student II

## Question

You've decided to make up another string manipulation game instead of paying attention in class. Starting with a string composed entirely of 'a' and 'b' characters, you will iteratively apply the following operation:

For a string **s** of length **len**, choose indices **i** and **j**, where **i** < **j** \&lt **len**. Choose a character **c** that occurs in the substring which begins at zero-based index **i** of string **s** and extends to the index **j** (inclusive). Replace all characters in **s** with zero-based index in \[**i**, **j**] with a single instance of **c** to generate **s'**. Set **s** to be **s'**.

As an example of sequence of operations consider the string 'abba'. Some of the possible transformations are shown below. The substring being replaced is enclosed in square brackets.

1. \[abb]a → \[aa] → a
2. a\[bba] → \[aa] → a
3. ab\[ba] → \[abb] → a
4. a\[bb]a → aba

The goal of your game is simple: calculate how many different sequences of operations you can perform. As this number can be very large, you decide to calculate it modulo 1,000,000,007. Two sequences of operations are considered different if they differ in length, or if they differ in at least one position. Note that the order of operations is a factor. The empty sequence of operations should be counted as well. Operations can be considered triples of (**i**, **j**, **c**) as described above, and these are the only values used when computing whether two operations are the same.

### Input Format

The first line of the input file contains a single number **N**, the number of test cases. Each test case is written on a separate line, and contains a string consisting of letters 'a' and 'b'.

### Constraints

$$
T = 20
$$

$$
1 ≤ len ≤ 60
$$

* **s** only contains the lowercase characters 'a' and 'b'.

### Output Format

Output N lines, with the answer to each test case on a single line.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
5
ab
aba
aabb
ababa
bbbbb
```

#### Output

```
3
13
57
642
120
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution</summary>



</details>
