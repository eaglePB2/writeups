---
description: >-
  https://www.hackerrank.com/contests/codenection-2023-preliminary-round-closed-category/challenges/cn-c3
icon: sigma
---

# Codey and Math

## Question

Codey is very interested in Math, and it encountered an interesting question during its last mathematics class.

In an infinite sequence number: $$..., -3, -2, -1, 0, 1, 2, 3, ...$$, Codey has been tasked with determining whether it's possible to obtain a **sum equal to `n`** by adding the numbers from `l` to `r`.

Codey wants you to find out if it's possible to achieve this sum. Print the values of `l` and `r` if so. If there are multiple answers, print any. Otherwise, print $$-1$$.

_Note that this problem uses a custom checker, so make sure your program compiles correctly and prints the output according to the format before submitting._

### Input Format

The first line contains an integer `n`, which represents the sum.

### Constraints

$$
0 \le n \le 10^9
$$

### Output Format

Output the values of `l` and `r` separated by a space where

$$
-10^9 \le l \le 0 \le 10^9
$$

that achieve the sum of `n`. If there are multiple answers, you can output any of them. Output $$-1$$ if there is no solution.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
6
```

#### Output

```
0 3
```

#### Explanation

When `n` is equal to 6, and `l` and `r` are 0 and 3, the sum from `l` and `r` is 0 + 1 + 2 + 3 = 6, which is equal to n.
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - This is a trap!</summary>

Since the range of values is 10^9, which means it must have some sort of mathematics to solve this question. (Otherwise, your program will get time limit exceed error, bruh)

If you are trying to loop through the range of numbers to see if it is possible to sum to that number, you had fallen to the trap.

Eventually, there's absolutely no `-1` case at all. This is because by giving such range, another way to find the answer to sample input 0 is:

```
-5 6
```

if you add all of them, you will find that the answer is 6 too. Upon investigation, you find that -5 and 5 neglects each other, -4 and 4, and so on...

if we write it as n, then the formula is:

```
-n + 1, n
```

For any numbers besides 0, the sum ranges from -n + 1 to n will always get n as answer.&#x20;

All we need to do is, test if the input is 0, then give it a special answer (0 0). For other values, they are all (-t + 1, t). Therefore, the solution is:

```python
t = int(input())
if t == 0:
    print("0 0")
else:
    print(-t + 1, t)
```

</details>
