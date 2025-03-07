---
description: >-
  https://www.hackerrank.com/contests/codenection-2021-closed-category/challenges/concert
icon: microphone-stand
---

# Concert

## Question

There's a concert happening at MMU Grand Hall. The grand hall is an infinitely long 1D number line, where each of the N students are standing at a certain point in the number line. Since they are all scattered around different positions in the number line, it's getting harder to manage them. So, the organizer Kyle wants to move them in the hall in such a way so that they all are in consecutive positions, for example, they are in positions 2,3,4,5 instead of being scattered around like 1,3,5,6. In simpler words, there is no gap between them.

At one time Kyle can pick one person who is on the most outer positions on any side. For example, in 1,3,5,6 the most outer positions are 1 and 6. He can pick either of them and move them to any unoccupied position so that they are not in the most outer position anymore. This makes them come closer and closer with each move until they are all in consecutive positions. Find the maximum and minimum number of moves that can accomplish this task.

### Input Format

Input consists of an integer N, the number of students and next N lines contain their positions in the concert hall.

### Constraints

$$
1 \le N \le 2*10^5
$$



$$
1 \le N_i \le 10^9
$$

### Output Format

Output two lines. The first line is minimum moves, second line is the maximum moves.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
3
7
4
9
```

#### Output

```
1
2
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution — Greedy Algorithm</summary>

A typical "Activity Selection Problem", which is a trivial for using greedy algorithm. We can sort by end time first, pick first possible meeting, and try to compare if they start after the last selected meeting ends afterwards.

Here's the solution:

```python
def max_meetings(meetings):
    sorted_meetings = sorted(meetings, key=lambda x: x[1])
    
    count = 1
    last_end = sorted_meetings[0][1]

    for start, end in sorted_meetings[1:]:
        if start >= last_end:
            count += 1
            last_end = end
            
    return count

n = int(input())
meetings = []
for _ in range(n):
    start, end = map(int, input().split())
    meetings.append((start, end))

print(max_meetings(meetings))
```

</details>
