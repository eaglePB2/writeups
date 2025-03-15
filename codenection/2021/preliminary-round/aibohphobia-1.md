---
description: >-
  https://www.hackerrank.com/contests/codenection-2021-open-category-preliminary/challenges/semester-breaks
icon: bus
---

# Semester Breaks

## Question

Semester breaks are here so all the students are living. Since there's no good way of students to travel from Cyberjaya to Putrajaya, MMU decided to provide buses to transport the students. There are N students at the hostel each leaving their room for the bus station at time $$T_i$$,where $$T_i$$ is the time i-th student leaves their room. MMU has B buses each of which bus can hold up to M students in it. Kyle was assigned as a volunteer to properly assign each student to a bus in which they can travel in. The bus can leave only when the last student assigned to the bus leaves their room and goes to the station. Kyle wants to minimize the waiting time for each student. What is the smallest possible value of the largest wait time for an student?

### Input Format

The first line contains three space separated integers N, B, and M. Next line contains N integers which describe the time when the students left their hostel room.

### Constraints

$$
2 \le N \le 10^5
$$

$$
1 \le T_i \le 10^9
$$

$$
1 \le M \le N
$$

* It is guaranteed that there's always enough bus and space for all students to be transported.

### Output Format

Output one integer which is the minimum possible maximum wait time for a student.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
6 3 2
1 1 10 14 4 3
```

#### Output

```
4
```

#### Explanation

There are 6 students, 3 buses and each bus can hold upto 2 students in itself. So we put students with time 1 in first bus. Students with time 3 and 4 in second bus. Students with time 10 and 14 in the last bus. Here student who arrives at time 10 needs to wait until student with time 14 arrives. So, the answer is 4.
{% endtab %}
{% endtabs %}

Note: The wait time is calculated as follows:

$$
WaitTime_i=T_{bus}-T_i
$$

Where $$T_{bus}$$ is the time when their bus leaves.

***

<details>

<summary>First Attempt - Divide in N groups</summary>

The first thought is simple, what if we first sort them ascendingly, then group them into equal parts, then all we need to do is taking the gaps on each group, thus find the maximum gap.

But surprisingly, all the hidden test cases are wrong, but we can have a quick start here.

Take this as a hint and figure it out what edge cases I didn't figured it out at first.

```python
N, B, C = map(int, input().split())
arrival_times = list(map(int, input().split()))

arrival_times.sort()
max_diff = 0

for i in range(0, N, C):
    group = arrival_times[i:i+C]
    if len(group) > 1:
        diff = abs(group[-1] - group[0])
    else:
        diff = 0
    max_diff = max(max_diff, diff)

print(max_diff)
```

</details>

<details>

<summary>Actual Solution - Optimize Group Dividers</summary>

If you figured it out the forgotten edge cases, congrats. If you didn't and decided want to know the answer:

* Assume the bus seats is more than students ( $$B*C > N$$ ), we can further minimize the gap by making the groups which has largest gap on different buses.
* the code above failed to realize this edge case, which makes most of the output is greater than expected output.

Therefore, we need to add a binary search to pinpoint the middle value, check whether if the bus can fit the person under three conditions:

* Maximum allowed time difference of max\_diff between first and last person in each bus
* Using no more than B buses
* Not exceeding capacity C in any bus

If it can, we try to move the left pointer to the right; otherwise, we try to move the right pointer to the left.

When the two pointers crossed each other, the gap (left pointer) between those 2 student will be the answer.

Here's the full code:

```python
def min_max_arrival_diff(N, B, C, arrival_times):
    arrival_times.sort()
    
    def can_accommodate(max_diff):
        buses_used = 1
        first_arrival = arrival_times[0]
        people_in_bus = 0
        
        for time in arrival_times:
            if people_in_bus < C and time - first_arrival <= max_diff:
                people_in_bus += 1
            else:
                buses_used += 1
                first_arrival = time
                people_in_bus = 1
                if buses_used > B:
                    return False
        return True
    
    left, right = 0, arrival_times[-1] - arrival_times[0]
    while left < right:
        mid = (left + right) // 2
        if can_accommodate(mid):
            right = mid
        else:
            left = mid + 1
    
    return left


N, B, C = map(int, input().split())
arrival_times = list(map(int, input().split()))
print(min_max_arrival_diff(N, B, C, arrival_times))
```

</details>
