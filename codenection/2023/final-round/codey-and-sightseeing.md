---
icon: city
description: >-
  https://www.hackerrank.com/contests/codenection-2023-final-round-open-category/challenges/cn-c15/
---

# Codey and Sightseeing

## Question

Codey has an adventurous spirit. Whatever catches its eye, it will take a look at. There are `n` locations, `m` roads, and `k` of the locations that have attracted Codey's attention. Each road represents a distance of `1`. You will be given an array `a` of length `k`, where $$a_i$$represents the $$i$$-th place of interest.

Due to its curiosity, Codey is eager to find the **shortest distance** it needs to take to reach the closest place of interest from each location. Your task is to find the **sum of distances** from every location to its closest place of interest.

### Input Format

The first line contains three integers, `n`, `m` and `k`, where `n` represents the total number of locations, `m` represents the number of roads and `k` represents the number of places of interest.

The second line contains `k` integers $$a_1, a_2, ... a_k$$ , each representing the $$i$$-th place of interest.

The following `m` lines contains two integers, `u` and `v`, which indicates the road between location `u` and `v`.

### Constraints

$$
1 \le n \le 10^5
$$

$$
n - 1 \le m \le n *\frac{n-1}{2}
$$

$$
1 \le k \le n
$$

$$
1 \le a_i \le n
$$

* All $$a_i$$ are unique
* It is guaranteed that there is no self loop & multiple edges for each test case

### Output Format

Output an integer representing the sum of distances from every location to its closest place of interest.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
3 2 1
1 
2 3
2 1
```

#### Output

```
3
```

#### Explanation

There is a total distance of `3` from each location to the place of interest as follows:

For location 1, the closest place of interest is itself, therefore distance is 0.

For location 1, the closest place of interest is location 1, therefore distance is 1.

<figure><img src="../../../.gitbook/assets/image (8).png" alt=""><figcaption></figcaption></figure>

For location 3, the closest place of interest is location 1, therefore distance is 2.

<figure><img src="../../../.gitbook/assets/image (9).png" alt=""><figcaption></figcaption></figure>

Therefore, the sum of distances from each location to its closest place of interest is $$0 + 1 + 2 = 3$$.
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Dijkstra Algorithm</summary>

This is a classic Dijkstra Algorithm question, which is to find the shortest distance to the destination and finally add it up.

If you know Dijkstra Algorithm, this should be easy, otherwise, don't waste your time onto here and you should skip to the next question, unless this is your final question to solve.

Here's the solution:

{% code overflow="wrap" lineNumbers="true" %}
```python
import heapq

def dijkstra(n, graph, sources):
    distances = [float('inf')] * n
    pq = []
    
    for source in sources:
        distances[source] = 0
        heapq.heappush(pq, (0, source))
    
    while pq:
        current_dist, current_node = heapq.heappop(pq)
        
        if current_dist > distances[current_node]:
            continue
        
        for neighbor in graph[current_node]:
            new_dist = current_dist + 1
            if new_dist < distances[neighbor]:
                distances[neighbor] = new_dist
                heapq.heappush(pq, (new_dist, neighbor))
    
    return distances

def sum_of_distances(n, m, k, places_of_interest, roads):
    graph = [[] for _ in range(n)]
    
    for u, v in roads:
        graph[u].append(v)
        graph[v].append(u)
    
    distances = dijkstra(n, graph, places_of_interest)
    
    return sum(distances)

n, m, k = map(int, input().strip().split())
places_of_interest = list(map(int, input().strip().split()))
places_of_interest = [p - 1 for p in places_of_interest]

roads = []
for _ in range(m):
    u, v = map(int, input().strip().split())
    roads.append((u - 1, v - 1))

print(sum_of_distances(n, m, k, places_of_interest, roads))
```
{% endcode %}

Note that I used `heapq` library to create heap structure. If you are going for data structure based questions (paths, trees, etc), this would be your most important library to go.

</details>
