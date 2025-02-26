---
description: >-
  https://www.hackerrank.com/contests/codenection-2023-final-round-open-category/challenges/cn-c14
icon: biohazard
---

# Codey and Zombies

## Question

Codey is on its way back home, as usual. To get there, it has to traverse a field that can be represented as an `n * m` grid. However, today is different because the field is inhabited by zombies! Codey is aware that the only way to eliminate the zombies is by setting them on fire.

So, Codey has devised an ingenious plan for this task, involving the use of bombs. Codey can place a bomb at a cell $$(i, j)$$, and doing so requires a total of $$a_i + b_j$$ units of fire powder. Codey is allowed to place **at most** one bomb on each cell $$(i, j)$$. When Codey detonates a bomb in cell $$(i, j)$$, it results in the burning of every cell in row `i` and every cell in column `j`. This means that all zombies in the corresponding rows and columns will be killed when Codey detonates the bombs.

What are the **minimum** and **maximum** amounts of fire powder Codey could use to guarantee the elimination of every zombie?

### Input Format

The first line contains `n` and `m`, where `n` represents the number of rows and `m` represents the columns in the 2D grid.

The second line contains `n` integers, $$a_1, a_2, a_3, ..., a_i$$, each representing the values fire powder for each row.

The third line contains `m` integers, $$b_1, b_2, b_3, ..., b_j$$, each representing the values fire powder for each row.

### Constraints

$$
1 \le n, m \le 10^5
$$

$$
1 \le a_i, b_i \le 10^5
$$

### Output Format

Output two integers, maximum and minimum amount of firepower Codey can use.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
3 3
1 1 2
1 2 1
```

#### Output

```
7 24
```

#### Explanation

The picture below shows the position of the bombs that can ensure the minimum amount of fire powder used $$(1 + 1) + (1 + 2) + (1 + 1) = 7$$.

<figure><img src="../../../.gitbook/assets/image (3).png" alt=""><figcaption></figcaption></figure>

And this is the maximum amount of fire power Codey can use to eliminate all the zombies which is $$24$$.

<figure><img src="../../../.gitbook/assets/image (4).png" alt=""><figcaption></figcaption></figure>
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Mathes</summary>

This question test in 2 parts:

1. How to calculate minimum using formula
2. How to rearrange the formula of maximum so it won't get TLE.

### Minimum Logic:

Based on the situation, we can now that it must have a row, or a column filled with bombs, otherwise it won't be enough to cover all the zombies. Therefore, all we need to do is:

1. Find whichever array is longer
   1. This is because, $$x > y,  x(y_1 + y_2 + ... + y_n) < y(x_1 + x_2 + ... + x_m)$$
2. Find the minimum value from that longest array, $$min(longer\_array)$$
3. Multiply it with length of shortest array, and add the elements on shortest array$$min(longer\_array) * len(shorter\_array)  + sum(shorter\_array)$$

That's all for the minimum logic.

### Maximum Logic

If we use `sum(sum(row) for row in grid)` instantly, you will get a TLE as generating the grid is taking too much time if our grid is very big.

Therefore, we need to think a more conventual way to find the answer of sum of every single cell.

The easiest part should be adding all the numbers in rows/column, then multiply with length of rows/columns, $$sum(row) * m + sum(column) * n$$.

That's all for the maximum logic.

Here's the code:

```python
m, n = map(int, input().strip().split())

row_values = list(map(int, input().strip().split()))
col_values = list(map(int, input().strip().split()))

if m > n:
    longer_array = row_values
    shorter_array = col_values
elif m < n:
    longer_array = col_values
    shorter_array = row_values
else:
    if min(row_values) < min(col_values):
        longer_array = row_values
        shorter_array = col_values
    else:
        longer_array = col_values
        shorter_array = row_values

min_value_in_longer = min(longer_array)

min_sum = min_value_in_longer * len(shorter_array) + sum(shorter_array)

max_sum = sum(row_values) * n + sum(col_values) * m

print(min_sum, max_sum)

```

Note starting from line 6, I added those if-else condition just to speed up the process and only check both arrays if the grid is square. Otherwise, starting from line 13 should be sufficient enough to pass the constraints.

Time complexity should stick with O(n), which n is the longer array. Otherwise, just in case someone is nitpicking, O(n \* m).

</details>
