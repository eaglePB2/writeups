---
description: >-
  https://www.hackerrank.com/contests/codenection-2023-preliminary-round-closed-category/challenges/cn-c5
icon: money-bills-simple
---

# Codey and Money

## Question

Codey is planning a trip to Penang, and it needs to gather exactly `n` ringgits for its exciting journey. However, it only has access to a limited number of ringgit bills, each of which is a power of $$10$$. The ringgit bills that Codey has been defined by an array `a` with a length of `k`, where represents the number of $$10^{i-1}$$ ringgit bills that Codey possesses.

For example, when $$k = 3, a = [3, 2, 1]$$, Codey has three $$1$$ ringgit bills, two $$10$$ ringgit bills, and one $$100$$ ringgit bill.

Codey would like you to determine if it's possible to obtain **precisely** `n` **ringgits** for its trip using the ringgit bills it has.

### Input Format

The first line contains an integer `t`, which represents the number of test cases.

The following provides the description of each test case:

* The first line contains an integer `k`, which represents the length of array `a`.
* The second line contains an integer `n`, which represents the final amount Codey needs.
* The third line contains `k` integers $$a_1, a_2, ..., a_k$$, each representing the number of $$10^{i-1}$$ ringgit bills.

### Constraints

$$
1 \le t \le 500
$$

$$
1 \le k \le 10^5
$$

$$
1 \le n \le 10^k
$$

$$
0 \le a_i \le 10^5
$$

* It is guaranteed that the sum of `k` over all test cases does not exceed `5 * 10^5`.

### Output Format

Outputs `YES` for test case if it's possible to obtain `n` ringgits, otherwise output `NO`.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
1
4
357
7 6 4 11
```

#### Output

```
YES
```

#### Explanation

The final amount `n` can be formed using `7` bills of `1` ringgit, `5` bills of `10` ringgit and `3` bills of `100` ringgit.
{% endtab %}

{% tab title="Input 1" %}
#### Input

```
2
2
11
2 3
2
1
0 1
```

#### Output

```
YES
NO
```

#### Explanation

In second test case, even though you have a `10` ringgit bill, you cannot split the bill to form exactly `1` ringgit.
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - So many constraints QAQ</summary>

I had tried a lot of method to solve this question, but only this one work and passed all the test cases.

Basically, there are 3 things need to consider:

* The larger money can't split into smaller money
* The smaller money can merge into larger money
* Given largest currency amount is < 10, If the required money digit length is bigger than the largest currency, that is 100% no.

My personal logic would be:

1. Split the required amount of money into arrays and reverse it.
2. Check if the money\[i] is smaller than the required money digits\[i], if yes, that is instant NO.
3. Otherwise, subtract that, and divide the current money\[i] by 10, then add onto the next money\[i], and so on.

In illustrate, it would look like this:

```
Requires: 351
Money: 11 7 6 4

Step 1: Split and Reverse the required money
Requires: [1, 5, 3]
Money: [11, 7, 6, 4]

Step 2: Compare Requires[0] < Money[0]
Requires: [5, 3]
Money: [10, 7, 6, 4]

Step 3: Money[0] // 10, then add onto Money[1]
Requires: [5, 3]
Money: [8, 6, 4]

...

Step 6:
Requires: []
Money: [3, 4]

Since the Requires is empty, the answer is YES.
```

Here's the full code for the implementation:

```python
def compare_array_and_digits(array, digits):
    digits.reverse()

    for i in range(len(digits)):
        if array[i] < digits[i]:
            return "NO"
        else:
            array[i] -= digits[i]
            try:
                array[i+1] += array[i] // 10
            except:
                pass

    return "YES"

t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())
    req = [int(digit) for digit in str(input())]
    have = list(map(int, input().strip().split()))
    
    print(compare_array_and_digits(have, req))
```

Note that I used `try, except, pass` to override the index out of range error. This technic is useful when it comes to competitive programming, when you simply don't want to handle the array leakage.

</details>
