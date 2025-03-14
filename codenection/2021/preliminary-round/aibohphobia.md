---
description: >-
  https://www.hackerrank.com/contests/codenection-2021-open-category-preliminary/challenges/faibohphobia-1/
icon: backward
---

# f(Aibohphobia)^-1

## Question

Kyle has a group project this semester, and he wants to come up with a name for their group chat for the project. As he is a fan of palindromes (Strings that read the same when reversed), he searched up a random string S from the internet and now he wants to turn this string into a palindrome. Kyle can change any character of the string to any desired character in 1 move. How many moves will it take him to transform this string into a palindrome?

### Input Format

S

### Constraints

$$
1 \le |S| \le 100
$$

### Output Format

Output a single integer, minimum moves required to turn S into a palindrome.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
vvvvvv
```

#### Output

```
0
```
{% endtab %}

{% tab title="Input 1" %}
#### Input

```
abcdabc
```

#### Output

```
2
```

#### Explanation

We can make the string `cbcdabc` with 1 move and `cbadabc` with 2 moves.
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Two Pointers</summary>

A classic question for 2-pointer question. All we need to do is get a 2 pointer, compare the first letter and last letter.

If first letter is not same as last letter, add 1 counter.

The comparison ends when the pointer meet each other, or passed through, aka right < left.

Here's the solution:

{% code lineNumbers="true" %}
```python
s = input()
mismatch_count = 0
left, right = 0, len(s) - 1

while left < right:
    if s[left] != s[right]:
        mismatch_count += 1
    left += 1
    right -= 1

print(mismatch_count)
```
{% endcode %}

</details>
