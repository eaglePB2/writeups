---
description: >-
  https://www.hackerrank.com/contests/codenection-2021-closed-category/challenges/distant-relatives
icon: people-roof
---

# Distant Relatives

## Question

Kyle has a family tree. It all started from a mysterious person, we call this person 1, the person had children, their children have children and so on. Any two children who share a common ancestor are called relatives, Kyle got an assignment from MMU to find how wide his family tree has spanned over the years, your task it to find the farthest relatives in his family tree to help him out.

(Edit : In the input, relationship means they have a connection. 1 4 means 1 and 4 have a connection. Either 1 is an ancestor of 4 or 4 is an ancestor of 1)

### Input Format

Input consists of an integer N , the number of relatives and next N-1 lines contain relationship between children.

### Constraints

$$
1 \le n \le 2*10^5
$$

$$
1 \le a, b \le n
$$

### Output Format

Output a single integer, the farthest distance of any two relatives on the family tree.

### Sample Inputs:



{% tabs %}
{% tab title="Input 0" %}
#### Input:

```
10
4 1
6 5
7 2
6 3
1 7
2 10
10 9
3 8
8 9
```

#### Output:

```
9
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Graph Traversal</summary>

A double breadth-first search-based graph traversal is possible to solve the problem.&#x20;

```python
from collections import defaultdict, deque

def longest_path(edges, n):
    graph = defaultdict(list)
    for start, end in edges:
        graph[start].append(end)
        graph[end].append(start)
    
    def bfs(start):
        visited = set()
        queue = deque([(start, 1)])
        visited.add(start)
        max_dist = 1
        furthest_node = start
        
        while queue:
            node, dist = queue.popleft()
            if dist > max_dist:
                max_dist = dist
                furthest_node = node
                
            for neighbor in graph[node]:
                if neighbor not in visited:
                    visited.add(neighbor)
                    queue.append((neighbor, dist + 1))
                    
        return furthest_node, max_dist

    start_node, _ = bfs(1)
    
    _, max_length = bfs(start_node)
    
    return max_length

n = int(input())
edges = []
for _ in range(n-1):
    a, b = map(int, input().split())
    edges.append((a, b))

print(longest_path(edges, n) - 1) # Why additional -1?
```

Note:

* This solution uses collections, which sometimes is not allowed in contest.
* This requires a magic number, "-1" to get all test cases.

</details>

<details>

<summary>Why DFS won't work? (yet)</summary>

Simple because, recursive depth limit exceeded for large values.

I had tried to use tree building method with DFS, yet 3 of the test cases hit runtime error due to recursive limit reached. Although that, I decide to share the current DFS method, just in case if someone has another good idea to optimize the recursive depth.

```python
def longest(start):
        max_d = [0]
        
        def dfs2(u, p):
            max_len = [0, 0]
            for v in g[u]:
                if v != p:
                    curr = dfs2(v, u)
                    if curr + 1 > max_len[0]:
                        max_len[1] = max_len[0]
                        max_len[0] = curr + 1
                    elif curr + 1 > max_len[1]:
                        max_len[1] = curr + 1
            max_d[0] = max(max_d[0], max_len[0] + max_len[1])
            return max_len[0]
        
        dfs2(start, -1)
        return max_d[0]

n = int(input())
g = [[] for _ in range(n+1)]
    
for _ in range(n-1):
    a, b = map(int, input().split())
    g[a].append(b)
    g[b].append(a)

print(longest(1))
```

</details>

