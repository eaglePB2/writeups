---
description: >-
  https://www.hackerrank.com/contests/codenection-2023-preliminary-round-closed-category/challenges/cn-c2
icon: ghost
---

# Codey and Hide-and-Seek

## Question

In a world that dances with riddles, Codey has embarked on a grand game of hide-and-seek within a mysterious 2D grid of size `n` x `m` . The grid exclusively contains two elements: Codey, represented by the character `#`, and empty cells, marked as `.`.

Your mission is to **uncover Codey's hiding spot** by finding the **coordinates** where Codey is lurking. If you succeed, you will happily report back with the coordinates (row and column). However, if Codey is too tricky and you can't find it in the grid, you'll report $$-1$$ as your answer.

### Input Format

The first line contains two integers, `n` and `m`, where `n` represents the number of rows and `m` represents the columns in the 2D grid.

The following `n` lines provide a representation of the 2D grid.

### Constraints

$$
1 \le n, m \le 10^3
$$

It is guaranteed that there will only be at most one `#` in the grid.

### Output Format

Output Codey's coordinate (row and column) in a single line, separated by a space if Codey is located within the grid. Output $$-1$$ if Codey is not found in the grid.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
2 3
.#.
...
```

#### Output

```
1 2
```

#### Explanation

Codey is present in this grid. The coordinates of Codey is printed in the output.
{% endtab %}

{% tab title="Input 1" %}
#### Input

```
5 10
..........
..........
..........
..........
..........
```

#### Output

```
-1
```

#### Explanation

Codey is not present in this grid.
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Loop through grids</summary>

first, store the grid.\
second, find each cell if it fits the symbol.\
lastly, if it finds it, return the coordinates; otherwise, returns -1.

\*Note that the coordinates had to +1, as the array starts from 0 0.\*

Here's the solution:

```python
m, n = map(int, input().strip().split())
grid = [list(input().strip()) for _ in range(m)]

for i, row in enumerate(grid):
    for j, cell in enumerate(row):
        if cell == '#':
            print(i+1, j+1)
            exit()
print(-1)
```

Note that I used enumerate function. This could be useful if you want to extract the index and values in array at the same time.

</details>
