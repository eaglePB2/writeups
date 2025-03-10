---
icon: coin
description: >-
  https://www.hackerrank.com/contests/codenection-2024-preliminary-round-closed-category/challenges/cn24-3
---

# Codey and Coins

## Question

Codey is hanging around a bustling market when it spots `n` money bags scattered along a straight path. This market can be visualized as a one-dimensional axis, with Codey **starting at position** $$x=0$$. Codey wants to gather these coins without drawing too much attention, so it follows a specific pattern to avoid being noticed.

Each money bag `i` is located at position at  and contains $$c_i$$ coins. At the start, Codey can choose to walk either to the right or to the left. Each time Codey collects the coins from the money bag at a specific position, it must **reverse its direction** and continue its search for money bags in the opposite direction.

Codey will keep switching directions and collect coins until there are no more money bags available in the direction it is facing that it hasn’t already collected.

What is the maximum number of coins Codey can gather?

### Input Format

The first line contains an integer, `n`, where `n` represents the number of money bags in the market.

The following `n` lines contains two integers, $$x_i$$and $$c_i$$, where $$x_i$$ represents the position of the `i`-th money bag and $$c_i$$ represents the number of coins in it.

### Constraints

$$
1 \le n \le 100
$$

$$
-10^5 \le x_i \le 10^5, x_i \ne 0
$$

$$
1 \le c_i \le 10^5
$$

* It's guaranteed that there's at most one money bag at each x-coordinate.
* There are no money bag at x = 0.

### Output Format

Output the maximum number of coins Codey can collect.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
4
4 8
1 5
-2 5
-1 9
```

#### Output

```
27
```

#### Explanation

There are 4 money bags, each positioned at -2, -1, 1 and 4. Codey starts at 0 and collects coins by moving as follows:

1. Moves right to 1,
2. Reverses direction and moves left to -1,
3. Reverses direction and moves right to 4,
4. Reverses direction and moves left to -2.

<figure><img src="../../../.gitbook/assets/image (7).png" alt=""><figcaption></figcaption></figure>

Hence, the maximum number of coin collected is $$5+9+8+5=27$$.
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Cocktail Method</summary>

I named it cocktail method because Codey had to shake the cocktail left and right, just like how he steals the money XD

Actually, the solution is simple. First, separate the positive coords and negative coords into 2 different arrays.

The positive array is sorted ascending order, and the negative array is sorted descending order.

After that, trim the longer array to the size of shorter array.

Then, we begin the cocktail shake, which uses 2 pointers to move through both of the arrays and collects the money.

But there's an issue - if the difference of length of two arrays is 1, Codey is possible to get all of the money if he starts from opposite direction.

Therefore, I made Codey to move positive array first, just in case if the negative array had all traversed, Codey can move once more positive to get the last bag of money. Otherwise, the iteration ends and outputs the sum of money.

Here's my code in advance:

{% code overflow="wrap" lineNumbers="true" %}
```python
t = int(input().strip())
neg_arr = []
pos_arr = []
total = 0

for a0 in range(t):
    n = list(map(int, input().strip().split()))
    if int(n[0]) < 0:
        neg_arr.append(n)
    else:
        pos_arr.append(n)

neg_arr = sorted(neg_arr, reverse=True)
pos_arr = sorted(pos_arr)

if len(neg_arr) > len(pos_arr):
    pos_arr = pos_arr[:len(neg_arr) + 1]
else:
    neg_arr = neg_arr[:len(neg_arr) + 1]

for i in range(max(len(pos_arr), len(neg_arr))):
    try:
        total += neg_arr[i][1]
    except:
        total += pos_arr[i][1]
        break
    try:
        total += pos_arr[i][1]
    except:
        break

print(total)
```
{% endcode %}

Note that I used try, except and break method so I don't have to explicitly care if both of the length of array is same, which potentially running out of index.

</details>
