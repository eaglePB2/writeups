---
description: >-
  https://www.hackerrank.com/contests/codenection-2023-preliminary-round-closed-category/challenges/cn-c4
icon: book
---

# Codey and Textbooks

## Question

Codey, who is enthusiastic when it comes to studies, is eager to purchase `n` textbooks from the university bookstore. These textbooks are priced in an interesting way:

* The first textbook costs $$m$$ dollars.
* The second textbook costs $$2 * m$$ dollars.
* The $$i$$-th textbook costs $$i * m$$ dollars.

Codey has `k` dollars in his wallet, but it's wondering **how much it needs to borrow** from the E-bee to cover the costs of purchasing `n` textbooks.

Your task is to calculate and output the amount of money that Codey has to borrow from the E-bee. If it doesn't need to borrow any money, the answer should be $$0$$.

Can you assist Codey in figuring out how much it needs to borrow from E-Bee, if at all?

### Input Format

The first line contains three integers `n`, `m`, `k`, where `n` represents the number of textbooks Codey wants, `m` represents the cost of the first book, and `k` represents the initial number of ringgit Codey has.

### Constraints

$$
0 \le n, m, k \le 10^5
$$

### Output Format

Outputs only one integer, the amount of money Codey has to borrow from E-bee. If it doesn't have to borrow money from E-bee, output `0`.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
5 2 3
```

#### Output

```
27
```

#### Explanation

Codey wants `5` textbooks, and the first book costs `2` ringgit. The cost of the books is:

$$
(1 * 2) + (2 * 2) + (3 * 2) + (4 * 2) + (5 * 2) = 30
$$

Codey has `3` ringgit, therefore Codey needs to borrow `30 - 3 = 27` ringgit.
{% endtab %}

{% tab title="Input 1" %}
#### Input

```
3 2 15
```

#### Output

```
0
```

#### Explanation

Codey doesn't have to borrow money from E-bee, because Codey has sufficient money.
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Sn AP</summary>

This is a typical "find the sum of AP" question. The formula of `Sum of AP` series is:$$\frac{n}{2} * (2a + (n-1) * d)$$

we know that d is always 1, so we can omit it. Substitute a to m, and we have the total price. Lastly, subtract k to see if it is more than 0. If it isn't, print 0; otherwise, print that value. The value is the amount of money that Codey has to borrow.

Here's the solution:

```python
n, m, k = map(int, input().strip().split())
ans = ((n * (n + 1) // 2) * m) - k
if ans <= 0:
    print("0")
else:
    print(int(ans))
```

</details>
