---
description: >-
  https://www.hackerrank.com/contests/codenection-2023-final-round-open-category/challenges/cn-c23
icon: apple-whole
---

# Codey and Apples

## Question

An apple a day keeps the doctor away. Codey is a good friend and would like to keep its friends away from the doctors and keep them healthy.

Codey has `n` bags, where the $$i$$-th bag contains $$a_i$$ apples, and it has decided to share its apples with its `m` friends. In order to keep this fair, Codey will only share the apples with its friends if it can choose some bags (at least 1 and possibly all) and evenly divide all the apples in those bags among the `m` friends. In other words, the total number of apples in the bags Codey has chosen must be divisible equally among the `m` friends.

Your task is to find the bags that meet this condition. If there are multiple answers, you may print any of them. If it is not possible, output $$-1$$.

_Note that this problem uses a custom checker, so make sure your program compiles correctly and prints the output according to the format before submitting._

### Input Format

The first line contains integers `n`, `m`, which represent the number of bags and the number of friends, respectively.

The second line of input contains `n` integers $$a_1, a_2, ... , a_n$$, each representing the number of apples in the $$i$$-th bag.

### Constraints

$$
1 \le m \le n \le 10^5
$$

$$
1 \le a_i \le 10^5
$$

### Output Format

Output the number of bags chosen, $$k \in \{k | 1 \le k \le n\}$$ in the first line if it meets the condition.

In the next line, output `k` unique integers separated by space, which are the indices of the selected bags for the second line.

If there are multiple answers, you may print any of them. If it is not possible, output $$-1$$.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
5 4
1 2 3 4 5
```

#### Output

```
1
4
```

#### Explanation

Codey can choose the fourth bag and get `4` apples. Codey can then split one apple to each friend.
{% endtab %}

{% tab title="Input 1" %}
#### Input

```
5 4
1 1 1 1 1
```

#### Output

```
4
1 2 3 4
```

#### Explanation

Codey can choose the first `4` bags and get $$1+1+1+1 = 4$$ apples. Codey can then split one apple to each friend.
{% endtab %}
{% endtabs %}

***

<details>

<summary>Current - 16/18 test cases</summary>

**This solution is still not 100%, it still got 2 test cases wrong**

Haven't figure it out why that particular 2 test case is wrong. But here's my current progress:

```python
def distribute_apples(n, m, apples):
    indexed_apples = [(apples[i], i) for i in range(n)]

    indexed_apples.sort(reverse=True, key=lambda x: x[0])

    total_apples_distributed = 0
    bags_used = 0
    bags_list = []

    for i in range(n):
        total_apples_distributed += indexed_apples[i][0]
        bags_list.append(indexed_apples[i][1])
        bags_used += 1

        if total_apples_distributed % m == 0:
            return bags_used, bags_list

    return -1, None

n, m = map(int, input().strip().split())
apples = list(map(int, input().strip().split()))

result, used_bags = distribute_apples(n, m, apples)

print(result)
if used_bags is not None:
    print(" ".join(map(str, [bag + 1 for bag in used_bags]))) 

```

</details>

<details>

<summary>Solution 1 - Mapping</summary>

This one is solved by one of my friends, he used a mod\_map method to keep track of the remainders.

If 2 set of values gives the same remainder, it means the both numbers can be combined together as a subset.

if the subsets remainder hits 0, then that is the solution. Otherwise, if all subsets is traversed, we still can't find no remainder cases, it will print -1 instead.

Here's my friend's solution:

```python
def distribute_apples(n, m, apples):
    mod_map = {0: -1}
    prefix_sum = 0

    for i in range(n):
        prefix_sum += apples[i]
        remainder = prefix_sum % m

        if remainder in mod_map:
            start_index = mod_map[remainder] + 1
            end_index = i
            bags_used = end_index - start_index + 1
            bags_list = list(range(start_index, end_index + 1))
            return bags_used, bags_list

        mod_map[remainder] = i

    return -1, None

n, m = map(int, input().strip().split())
apples = list(map(int, input().strip().split()))

result, used_bags = distribute_apples(n, m, apples)

print(result)
if used_bags is not None:
    print(" ".join(map(str, [bag + 1 for bag in used_bags]))) 
```

</details>
