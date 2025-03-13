---
icon: shop
description: >-
  https://www.hackerrank.com/contests/codenection-2021-closed-category/challenges/mamak
---

# Mamak

## Question

MMU is setting up a new menu for N restaurants in the campus. Each restaurant can only serve one type of food and there are 4 different types of food available numbered as 1,2,3,4 (Mee Goreng, Nasi Goreng, Nasi Lemak, Roti). The MMU authority wants the students to have a varied diet. Each student has 2 favorite restaurants, the authority wants these two restaurants to have different menus so that the student can choose between at least two types of food. No restaurant is a favorite of more that 3 students.

### Input Format

Input consists of two integers N and M. Next M lines contain two different integers a and b, the favorite restaurant of the ith student.

### Constraints

$$
2 \le N \le 100
$$

$$
1 \le M \le 150
$$

### Output Format

Output an N digit number, each digit in range (1..4) which describes the type of food to be included in the menu of ith restaurant. Print the smallest possible such number.

**Sample Input 0**

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
5 6
4 1
4 2
4 3
2 5
1 2
1 5
```

#### Output

```
12133
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution — Graph Coloring</summary>

Small rant: this question is confusing AF, which had to passed to ChatGPT to understand the actual question.

Besides the poor description, we can still understand the actual requirement, which is to build a typical graph coloring problem.

```python
from collections import defaultdict

def assign_menus(N, M, preferences):
    # Step 1: Create graph (adjacency list)
    graph = defaultdict(set)
    for a, b in preferences:
        graph[a].add(b)
        graph[b].add(a)
    
    # Step 2: Assign food types (1 to 4) using a greedy approach
    food_assignment = {}  # Stores restaurant -> food type mapping
    food_types = {1, 2, 3, 4}  # Available food types
    
    for restaurant in range(1, M + 1):
        # Get the food types used by neighbors (adjacent restaurants)
        used_foods = set()
        for neighbor in graph[restaurant]:  
            if neighbor in food_assignment:  
                used_foods.add(food_assignment[neighbor])

        # Assign the first available food type that is not used by neighbors
        for food in food_types:
            if food not in used_foods:
                food_assignment[restaurant] = food
                break
    
    # Step 3: Print the menu assignment
    for restaurant in range(1, M + 1):
        print(food_assignment[restaurant], end="")

# User Input
N, M = map(int, input().split())
preferences = []

for _ in range(N):
    a, b = map(int, input().split())
    preferences.append((a, b))

assign_menus(N, M, preferences)
```

Note that I purposedly added the comment for each segment so that I could still remember what I am doing after few years, lol.

</details>
