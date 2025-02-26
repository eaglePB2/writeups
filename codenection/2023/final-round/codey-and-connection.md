---
icon: link
description: >-
  https://www.hackerrank.com/contests/codenection-2023-final-round-closed-category/challenges/cn-c11/problem
---

# Codey and Connection

## Question

Codey is a huge fan of CodeNection, and one day, while enjoying a CodeNection-themed article he noticed that the word 'Connection' closely resembles 'CodeNection'. Excited by this idea, Codey prepared a sequence of `n` **uppercase** alphabetical letters, all lined up from left to right. Codey decided to connect these letters following a specific rule:

* Let the index of the previously connected letter be $$i$$ , and pick an integer $$j$$ where $$i \lt j \le n$$. If no letter was connected previously, Codey could pick any $$i$$.
* Connect $$i$$ to $$j$$.

Codey is now curious to know if it's possible to **connect** these letters in a way that spells out the word `CODENECTION` from **left to right**. Can you help Codey figure it out?

### Input Format

The first line contains an integer `t`, which represents the amount of test cases for the problem.

The following provides the description of each test case:

* The first line contains an integer `n`, which represents the number of letters in the sequence of uppercase letters.
* The second line contains the sequence of `n` uppercase letters.

### Constraints

$$
1 \le t \le 100
$$

$$
11 \le n \le 10^3
$$

### Output Format

Output `YES` for each test case if its possible to spell out `CODENECTION` otherwise output `NO`.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
2
13
C X O D E N X E C T I O N
13
L O V E F R O M C O D E Y 
```

#### Output

```
YES
NO
```

#### Explanation

In the first test case, it is possible to connect the letters, and spell out `CODENECTION`.

<figure><img src="../../../.gitbook/assets/image (2) (1).png" alt=""><figcaption></figcaption></figure>

whereas for the second test case, it is not possible to connect in such a way that spells out `CODENECTION`.
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution 1 - Regex</summary>

I love using regex, so this will be my go-to solution during competition.

Basically, regex has a term called "$$.*$$", which means "for all". This is used to quickly check if the text contains "CODENECTION" in a swift way.

Otherwise, there's nothing special to say. connect the string, apply regex, then output the result.

Here's the code:

```python
import re

def contains_pattern(word, pattern):
    regex = ".*".join(pattern)
    return bool(re.search(regex, word))

t = int(input().strip())
for _ in range(t):
    m = int(input())
    n = input().strip().split()
    
    if contains_pattern("".join(n), "CODENECTION"):
        print("YES")
    else:
        print("NO")
```

</details>

<details>

<summary>Solution 2 - Pointer loop</summary>

If you forgot the syntax of regex, no worries, you could still scan the words manually.

given the constraints are soft enough (only $$100 * 10^3 = 10^5$$), we can simply using pointer loop to solve this question.

The way it works is simple: check the first letter in the given text, then adds 1, search second letter, etc.

it will exit with "YES" if the counter is equal to length of the CODENECTION string, or "NO" if the pointer looped the whole given text.

Here's the solution, for manually looping through the text:

```python
def contains_codenection(words):
    target = "CODENECTION"
    target_index = 0

    for char in words:
        if char == target[target_index]:
            target_index += 1
        if target_index == len(target):
            return True

    return False

t = int(input().strip())
for _ in range(t):
    m = int(input())
    n = input().strip().split()
    
    if contains_codenection("".join(n)):
        print("YES")
    else:
        print("NO")
```

</details>
