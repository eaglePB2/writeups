---
description: >-
  https://www.hackerrank.com/contests/codenection-2021-open-category-finals/challenges/last-year-when-life-was-better
---

# 🥰 Last year when life was better

## Question

2019 was an amazing year. I loved 2019 so much that I want to find 2019 everywhere. So, I found a random string S that contains digits `1-9`. I want to find number of pairs of integers $$\{i,j\ |\ 1\le i \le j \le|S|\}$$  where characters between ith and jth positions form an integer which is a multiple of 2019.

### Input Format

S

### Constraints

$$
1 \le |S| \le 2*10^5
$$

### Output Format

Print the answer.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
1817181712114
```

#### Output

```
3
```

#### Explanation

Three pairs - (1,5), (5,9), and (9,13) - form such integers:

* 18171 = 2019 \* 9
* 12114 = 2019 \* 6
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Modular</summary>

A modular solution traversing reversed string is able to solve the problem. We first stores the frequency of prefix mod values (3 \* 673), then we try to loop through the length of the string, getting their modular values.

If we got same mod value, then we prove that there's a substring which is the multiple of 2019.

After traversed all strings, output the counter.

```python
from collections import defaultdict

def count_divisible_by_2019(s):
    mod = 2019
    count = 0
    mod_count = defaultdict(int)  # Stores frequency of prefix mod values
    mod_count[0] = 1  # To handle cases where prefix itself is divisible

    prefix = 0
    power = 1  # To handle positional values correctly (like 10^0, 10^1, ...)

    # Traverse the string from right to left (ensuring digit order remains)
    for digit in reversed(s):
        prefix = (prefix + int(digit) * power) % mod
        count += mod_count[prefix]  # If the same mod value was seen before, we found substrings
        mod_count[prefix] += 1
        power = (power * 10) % mod  # Maintain correct positional contribution

    return count

print(count_divisible_by_2019(input()))
```

</details>
