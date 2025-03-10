---
icon: tomato
description: >-
  https://www.hackerrank.com/contests/codenection-2024-final-round-closed-category/challenges/cn24-10
---

# Codey and Gardening

## Question

The city of CodeNation is having a Gardening Contest, where participants strive to grow as many plants as possible.

The progress of participants is recorded in an array of length `n`. Each record will have the format `a` `p`, where $$a_i$$ represents the participant's name, and $$p_i$$ represents how many plants they gained or lost that month. A positive number $$p_i$$ means they added plants to their garden, while a negative number indicates that they lost some due to harsh weather.

**If multiple gardeners end up with the same total, they will get the same ranking.**

Zoey, the president of CodeNation, needs assistance in determining the ranking of Codey in the contest.

### Input Format

The first line contains an integer `n`, where `n` represents the number of records.

The following `n` lines contain the participant's monthly performance in `a` `p` format in chronological order, where $$a_i$$ is a string of lowercase English letters and $$p_i$$ is an integer.

### Constraints

$$
1 \le n \le 1000
$$

$$
1 \le |a| \le 32
$$

$$
-1000 \le p \le 1000
$$

### Output Format

Output an integer, the ranking of Codey in the contest.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
3
codey 10
zoey 5
codey -5
```

#### Output

```
21
```

#### Explanation

Since both Codey and Zoey have 5 plants each, they share the top rank. Codey's rank is 1.
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Standard Ranking System</summary>

Personally, I think this question is **harder** than 3rd question. This is because the ranking system is different than what I used to think.

In general terms, the ranking should be like:

```
1 100
2 50
2 50
4 25
...
```

But in this question, the ranking is like this:

```
1 100
2 50
2 50
3 25
...
```

Python's default rank sorting method follows the first scenario. But the actual ranking they accept is the second scenario. Due to can't even see the test cases, therefore I had to emphasize that this question is **harder** than 3rd question. (Which is [Codey and Symbol](codey-and-symbol.md).)

Thanks for the second scenario, we have to end up manually code the ranking.

Otherwise, my personal favorite approach is by using dictionary method, store and update their values as line goes on, and start doing the manual sorting.

Here's the final code: (Yes, it's ugly please forgive me)

{% code overflow="wrap" lineNumbers="true" %}
```python
n = int(input().strip())
scores = {}
standard_ranking = {}
previous_score = None
repeated_counter = 0

for _ in range(n):
    name, score = input().strip().split()
    scores[name] = scores.get(name, 0) + int(score)

ranked_list = sorted(scores.items(), key=lambda x: x[1], reverse=True)

for i, (name, score) in enumerate(ranked_list, start=1):
    if score != previous_score:
        current_rank = i
        previous_score = score
        standard_ranking[name] = current_rank - repeated_counter
    else:
        repeated_counter += 1
        current_rank = i-1
        standard_ranking[name] = current_rank

codey_rank = standard_ranking.get("codey")

print(codey_rank)
```
{% endcode %}

Fun fact: This solution is not made during competition; it's after made with all test cases passed after the competition is finished.

</details>
