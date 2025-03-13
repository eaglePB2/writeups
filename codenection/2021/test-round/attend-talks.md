---
description: >-
  https://www.hackerrank.com/contests/codenection-2021-closed-category/challenges/attend-talks/
icon: podium
---

# Attend Talks

## Question

It’s Barcamp season! Every year MMU IT Society organizes a Barcamp event where people can talk about whatever they wish to talk about. There are N talks scheduled in this year’s Barcamp, and Kyle wants to attend as many talks as possible. You’re given the start and end time of each talk, help Kyle find out what is the maximum number of talks he can attend on this year’s Barcamp.

### Input Format

Input consists of an integer N and next N lines contain start and end time of ith talk.

### Constraints

$$
1 \le n \le 2*10^5
$$



$$
1 \le a \lt b \le 10^9
$$

### Output Format

Output a single integer, the maximum number of talks that Kyle can attend.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
10
6 7
4 5
8 9
2 3
10 11
1 2
9 10
3 4
5 6
7 8
```

#### Output

```
10
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
