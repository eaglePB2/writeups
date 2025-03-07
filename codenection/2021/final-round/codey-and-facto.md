---
description: >-
  https://www.hackerrank.com/contests/codenection-2023-final-round-open-category/challenges/cn-c9
icon: industry
---

# Codey and Facto

## Question

Codey is very interested in _facto_, a concept he learned in the mathematics class last week.

If you are given an integer `n` and an integer `m`, a _facto_ of `n` and `m` is an array of integers such that the product of every element in the array is `n`, and the length of the array is `m`.

For example, when $$n=8, m=2$$, one of the _facto_ is $$[4, 2]$$, as $$4 * 2 = 8$$, and the array's length is $$2$$. Other examples of _facto_ for  $$n=8,m=2$$include $$[-4,-2],[1,8]$$, and $$[8,1]$$.

Codey wants you to find the total number of **unique** _facto_ that exist for the `n` and `m` modulo $$10^9+7$$. Recall that `a` modulo `b` is the remainder of `a` when divided by `b`.

### Input Format

The first line contains two integers, `n` and `m`, where `n` represents the number `n`, and `m` represents the number of _facto_.

### Constraints

$$
0 \le n,m \le 10^6
$$

### Output Format

Output the total number of unique _facto_ for `n` and `m` modulo $$10^9 + 7$$.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
8 2
```

#### Output

```
8
```

#### Explanation

facto for $$n = 8, m=2$$ includes: $$[1,8],[8,1],[-1,-8],[-8,-1],[4,2],[2,4],[-2,-4],[-4,-2]$$
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Math Formula ft. combinations</summary>

Huge thanks to `_sheng_` from discord server, which gives the most important math formula for this question.

From his words, let n = 12, m = 10, first break down into factors with powers:

$$12 = 2^2 + 3^1$$

then, let $$n = p^a$$.

For each prime p with power a, we can use this formula below to find all the distribution of factors:

$$\sum {_{a+n-1}C_{n-1}}$$

For same examples, $$2^2$$ can be described as:

$$_{2+10-1}C_{10-1} = {_{11}C_9} =55$$

Meanwhile, $$3^1$$ can be described as:

$$_{1+10-1}C_{10-1} = {_{10}C_9} = 10$$

Multiply them together, $$55*10=550$$

Finally, as we have $$2^{n-1}$$ ways to arrange the remaining "1"s, so we calculate the permutation of that:

$$2^{10-1} = 512$$

Finally, multiply that number to get the final result: (mod it if needed)

$$550 * 512 = 281600$$

Feel free to use another example for that formula, so, all we need to do is convert this math formula into code.

Don't forget to MOD the answers owob!

Here's my code solution:

```python
import math

MOD = 10**9 + 7

def fcm(m, n):
    MOD = 10**9 + 7
    
    def prime_factorize(x):
        factors = {}
        d = 2
        while d * d <= x:
            while x % d == 0:
                factors[d] = factors.get(d, 0) + 1
                x //= d
            d += 1
        if x > 1:
            factors[x] = factors.get(x, 0) + 1
        return factors

    prime_factors = prime_factorize(m)

    result = 1
    for prime, exponent in prime_factors.items():
        result *= math.comb(exponent + n - 1, n - 1)
        result %= MOD

    result *= pow(2, n - 1, MOD)
    result %= MOD

    return result

m, n = map(int, input().strip().split())
print(fcm(m, n))
```

Some people had proposed a recursive solution, but it will hit `recursive depth reached` error when n > 1000, so in this question, recursive method is not able to clear all test cases.

</details>
