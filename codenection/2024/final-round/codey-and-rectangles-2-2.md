---
description: >-
  https://www.hackerrank.com/contests/codenection-2024-final-round-closed-category/challenges/cn24-14
icon: bridge
---

# Codey and Toy Kingdom 2

## Question

Earlier, Codey built a toy kingdom with islands and bridges but soon realized it wasn’t the best way to construct a kingdom. To impress Zoey, Codey now wants to build an outstanding toy kingdom.

Therefore, Codey decided to rebuild the kingdom with n islands and m bridges, where each bridge connects two different islands. However, the kingdom might be disconnected and may contain redundant bridges.

Help Codey figure out how many bridges need to be burned and how many need to be built to ensure all islands are connected without any redundant bridges, so it can impress Zoey!

### Input Format

The first line contains two integers, m and n, where n represents the number of islands, and m represents the number of bridges.

The following m lines contain two integers, u and v, which indicates the bridge between island u and v.

### Constraints

$$
1 \le n \le 10^5
$$

$$
0 \le m \le min(10^5,\frac{n*(n-1)}{2})
$$

* It is guaranteed that there is no self loop & multiple edges for each test case.

### Output Format

Output two integers, a and b in a single line separated by a space, where a represents the number of bridges need to be burned and b represents the number of bridges need to be built.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
6 5
1 2
2 3
3 1
4 5
5 6
```

#### Output

```
1 1
```

#### Explanation

The initial toy kingdom looks like this:

<figure><img src="../../../.gitbook/assets/image (18).png" alt=""><figcaption></figcaption></figure>

* We burn the bridge between island 2 and 3 to ensure there is no redundant bridge.
* We add a bridge between island 3 and 5 to ensure all islands are connected.

This results in the following toy kingdom:

<figure><img src="../../../.gitbook/assets/image (19).png" alt=""><figcaption></figcaption></figure>
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - DSU, aka Don't attempt unless you have time, <strong>a lot of</strong> time.</summary>

If you have so much time, and nothing else to do, maybe you can try this one.\
&#x20;(Spoiler: it's not worth it attempting this question during contest.)

Not only it requires you to have a graph template ready, but you also need to have fully extensive knowledge to know the keywords below.

Not to mention you have to type all of them in 2 hours.

{% hint style="info" %}
Keywords: Disjoint Set Union / Union-Find with Path Compression (aka DSU)
{% endhint %}

First, I will show the final code, which passed all the test cases:

{% code overflow="wrap" lineNumbers="true" %}
```python
from collections import defaultdict

class Graph:
    def __init__(self, n):
        self.n = n
        self.graph = []
        self.parent = {i: i for i in range(1, n + 1)}
        self.rank = {i: 0 for i in range(1, n + 1)}
        self.cycle_count = 0
    
    def add_edge(self, u, v):
        self.graph.append((u, v))
    
    def find_parent(self, i):
        if self.parent[i] != i:
            self.parent[i] = self.find_parent(self.parent[i])
        return self.parent[i]
    
    def union(self, x, y):
        root_x = self.find_parent(x)
        root_y = self.find_parent(y)
        
        if root_x != root_y:
            if self.rank[root_x] > self.rank[root_y]:
                self.parent[root_y] = root_x
            elif self.rank[root_x] < self.rank[root_y]:
                self.parent[root_x] = root_y
            else:
                self.parent[root_y] = root_x
                self.rank[root_x] += 1
        else:
            self.cycle_count += 1
    
    def count_components_and_cycles(self):
        component_count = 0
        for u, v in self.graph:
            self.union(u, v)
        
        unique_roots = set(self.find_parent(i) for i in range(1, self.n + 1))
        component_count = len(unique_roots)
        
        return self.cycle_count, (component_count - 1)


n, m = map(int, input().split())
graph = Graph(n)

for _ in range(m):
    u, v = map(int, input().split())
    graph.add_edge(u, v)

cycles, components = graph.count_components_and_cycles()
print(cycles, components)
```
{% endcode %}

If you are still there, well, let me explain the whole thing parts by parts. (sigh)

#### 1. Graph Representation

{% code overflow="wrap" %}
```python
from collections import defaultdict

class Graph:
    def __init__(self, n):
        self.n = n
        self.graph = []  # List of edges
        self.parent = {i: i for i in range(1, n + 1)}  # Disjoint set parent mapping
        self.rank = {i: 0 for i in range(1, n + 1)}  # Rank for union by rank
        self.cycle_count = 0  # Track number of cycles
```
{% endcode %}

The graph is stored as a list of edges, which initialize the parent\[i] and rank\[i].

* `parent[i]` is the root of the node (it would become a tree alas)
* `rank[i]` is the height of the tree
* `cycle_count` is to count how many cycles in the graph.

Note that, the test cases could have multiple graphs, our final job is to construct a giant tree while tracking the total number of cycles and graph sets.

#### 2. Adding Edges

```python
def add_edge(self, u, v):
    self.graph.append((u, v))
```

Self-Explanatory. You should know what it does if you learnt how to code a graph.

#### 3. Find roots

{% code overflow="wrap" %}
```python
def find_parent(self, i):
    if self.parent[i] != i:
        self.parent[i] = self.find_parent(self.parent[i])  # Path compression
    return self.parent[i]
```
{% endcode %}

This is the core of DSU algorithm, which is to find the representative node, aka root of a set. This will help us efficiently find out how many distinct sets are there.

(aka, if there's only 1 root, we can know there are only 1 graph in test case.)

#### 4. Union by Rank

{% code overflow="wrap" %}
```python
def union(self, x, y):
    root_x = self.find_parent(x)
    root_y = self.find_parent(y)

    if root_x != root_y:
        if self.rank[root_x] > self.rank[root_y]:
            self.parent[root_y] = root_x
        elif self.rank[root_x] < self.rank[root_y]:
            self.parent[root_x] = root_y
        else:
            self.parent[root_y] = root_x
            self.rank[root_x] += 1
    else:
        self.cycle_count += 1  # If they have the same root, a cycle is detected
```
{% endcode %}

Now we are start comparing the representative roots of both sets.

If they belong to different sets, we can merge them into a set (attach smaller tree into larger tree)

* Also, that means we have distinct set of graphs.

If we found that they use the same representative root, we know that there's a cycle exist.&#x20;

#### 5. Counting

{% code overflow="wrap" %}
```python
def count_components_and_cycles(self):
    component_count = 0
    for u, v in self.graph:
        self.union(u, v)

    unique_roots = set(self.find_parent(i) for i in range(1, self.n + 1))
    component_count = len(unique_roots)

    return self.cycle_count, (component_count - 1)
```
{% endcode %}

After preprocessing all edges by union, we can finally count distinct set of graphs.

* Note that different root representatives = distinct set of graphs.

Finally, we will return 2 things:

1. How many self cycles (aka, how many bridge do we need to burn)
2. How many components (aka, how many bridges we need to build, we need -1 as we only need to build (n-1) bridges between n sets of islands.

Finally, we wrapped it all up. I am sure someone could come up a shorter solution, but I will just call it a day.

</details>
