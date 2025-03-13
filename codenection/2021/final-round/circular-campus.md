---
description: >-
  https://www.hackerrank.com/contests/codenection-2021-open-category-finals/challenges/circular-campus
icon: circle
---

# Circular Campus

## Question

MMU has a circular campus. We have N buildings arranged in the campus and one of it is Kyle's faculty. Kyle is currently on the building that is S buildings away from his faculty in the clockwise direction (Means his faculty is S buildings away anti clockwise). Now he'll repeat the move: Go to the building that is K buildings away from the building he is currently in, in clockwise direction. How many moves will it take for him to reach his faculty? If he cannot reach his faculty at all, print `-1`.&#x20;

### Input Format

First line contains an integer T, the number of testcases. The next line is, N S K.

### Constraints

$$
1 \le T \le 100
$$

$$
2 \le N \le 10^9
$$

$$
1 \le S \le N
$$

$$
1 \le K \le 10^9
$$

### Output Format

A single integer, the number of moves to reach his faculty, or -1.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
4
10 4 3
1000 11 2
998244353 897581057 595591169
10000 6 14
```

#### Output

```
2
-1
249561088
3571
```

Explanation

In first test case, Kyle is on the building that is 4 buildings away from the faculty. He will be reaching his faculty after two moves of 3 buildings.
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Optimization Issue</summary>

This one can be explained in simple math terms. Since the buildings are in circular, we can convert Kyle's movement as  $$P_m =(1+m×K)\%N$$, where 1 as Kyle's starting point.

Then, his target can be rewrite to this math expression: $$(1 - S)\%N$$.

\*Circular means we can modular the number of buildings to make Kyle keep looping in enclosed cycle.

Then, we can check if the $$gcd(K,N)$$ is divisible by $$(1 - S)\%N$$. If it is not divisible, this implies that no matter how hard Kyle had walked, he is never reaching the destination, we can eliminate early and print -1.

Otherwise, we can simply simulate the path and track the counter.

But, this question is not that simple. As the third case, which introduces large input, this strategy will hit MemoryError, therefore we need to optimize it:

```python
def min_moves_to_reach_checkpoint(N, K, S):
    start = 1
    target = (1 - S) % N
    visited = set()
    moves = 0
    
    while start not in visited:
        if start == target:
            return moves
        visited.add(start)
        start = (start + K) % N
        moves += 1
        
    return -1

i = int(input())
for _ in range(i):
    N, K, S = map(int, input().split())
    print(min_moves_to_reach_checkpoint(N, S, K))
```

The code above hits memory error, therefore we can optimize it by Extended Euclidean Algorithm to get the m, via modular inverse.

Here's the modification of the code, which passed allt est cases:

```python
import math

def min_moves_to_reach_checkpoint(N, K, S):
    target = (-S) % N  # Target position
    g = math.gcd(K, N)
    
    # If GCD does not divide target, there's no solution
    if target % g != 0:
        return -1
    
    # Reduce the equation by dividing by gcd
    N //= g
    K //= g
    target //= g
    
    # Find modular inverse of K mod N using Extended Euclidean Algorithm
    def mod_inverse(a, mod):
        g, x, y = extended_gcd(a, mod)
        if g != 1:
            return None  # No inverse exists
        return x % mod

    def extended_gcd(a, b):
        if b == 0:
            return (a, 1, 0)
        g, x1, y1 = extended_gcd(b, a % b)
        return (g, y1, x1 - (a // b) * y1)
    
    inv_K = mod_inverse(K, N)
    
    if inv_K is None:
        return -1
    
    # Calculate the number of moves using modular inverse
    moves = (target * inv_K) % N
    return moves

i = int(input())
for _ in range(i):
    N, K, S = map(int, input().split())
    print(min_moves_to_reach_checkpoint(N, S, K))
```

</details>
