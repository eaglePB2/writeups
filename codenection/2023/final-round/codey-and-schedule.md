---
description: >-
  https://www.hackerrank.com/contests/codenection-2023-final-round-closed-category/challenges/cn-c12
icon: calendar-circle-user
---

# Codey and Schedule

## Question

Codey is the chairman of a competition with `n` teams and the game cannot start without a schedule. Due to time constraints, Codey wants to arrange a schedule with a minimal number of rounds so that each of the `n` team will play against **two different teams**. Help Codey arrange the schedule!

Output `m`, which represents the number of rounds, and `m` pairs of integers $$a_i$$ and $$b_i$$ , which represent the $$i$$-th match up in the schedule. **It is guaranteed that the answer exists**.

_Note that this problem uses a custom checker, so make sure your program compiles correctly and prints the output according to the format before submitting._

### Input Format

The first line contains an integer `n`, which represents the number of teams.

### Constraints

$$
3 \le n \le 10^5
$$

### Output Format

Output an integer `m`, which represents the number of rounds, for the first line.

In the following `m` lines, output pairs of integers $$a_i$$ and $$b_i$$, where $$a_i \ne b_i$$, representing the $$i$$-th matchup in the schedule.

If there are multiple answers, you may output any of them.

**It is guaranteed that the answer exists**.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
5
```

#### Output

```
5
3 2
3 4
5 1
5 4
2 1
```

#### Explanation

There are `5` rounds in total.

In the first round, team `3` will play against team `2`. \
In the second round, team `3` will play against team `4`. \
In the third round, team `5` will play against team `1`. \
In the fourth round, team `5` will play against team `4`. \
In the fifth round, team `2` will play against team `1`.
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Simplest Round Robin</summary>

Ignore all the descriptions, as they only to make you confuse about that.

Basically, all the question wants is, loop through array\[n] vs array\[n+1], then each team will guarantee that must have fought 2 different teams.

How it works? I draw the illustrate, and you will understand:

```
Assume we have 2 identical arrays:
1 2 3 4 5
1 2 3 4 5
let's shift the second array to the left once:
1 2 3 4 5
2 3 4 5 1

Have you found the pattern? 
let's take team 1 as example, he will be facing 2 and 5;
take team 3 as example, he will be facing 4 and 5
...

And you will be find that, the amount of tries is exactly as same as the total team number.
This exactly solved the whole problem!
```

The only edge case we need to consider is explicitly print array\[0] vs array\[n] as array is not a cycle. That's it.

Now we found the procedure, now let's get into coding!

```python
t = int(input().strip())
print(t)

for i in range(1, t+1):
    if(i >= t):
        print(t, "1")
    else:
        print(i, i+1)
```

</details>
