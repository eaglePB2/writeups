---
description: 'Difficulty: Easy'
---

# Cycle Prefix Averages

## Question

Prefix Averages Algorithm is used to calculate average of the first i elements in an array. That algorithm is widely used in financial analysis. Peter, which is a financial analyst, is now wondering if he keeps repeating the prefix averages, how many times it repeats until all the numbers are same as first element. To make things simple, he will omit any trailing decimals during finding the averages instead.

### Input Format

The first line consists of an integer N, which is the number of arrays to input. Starting from second line, there 1D array which consist of various numbers with various size, given all integers.

### Constraints

$$
1 \le N \le 100
$$

$$
1 \le i \le 10^5
$$

$$
1 \le arr[i] \le 10^9
$$

### Output Format

Output the total count of cycle per line, which makes all numbers in an array into 1. If it is impossible to make all numbers in an array into 1, print -1 instead.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
4
11 23 5 27 33 1 45 18
101325 999999 8763 1599 20
2 3 5 7 11 13 17 19 23 29
12333 33455 101325 114514 1919810
```

#### Output

```
5
22
4
16
```

#### Explanation

Taking first line as example:

$$
[11,23,5,27,33,1,45,18]
$$

In first cycle:

* \[0]: 11
* \[1]: $$\frac{11+13}{2}=17$$
* \[2]: $$\frac{11+23+5}{3}=13$$
* ...
* \[7]: $$\frac{11+23+5+27+33+1+45+18}{8}= 20$$

The new array becomes:

$$
[11, 17, 13, 16, 19, 16, 20, 20]
$$

Repeat the cycle again until the array becomes:

$$
[11,11,11,11,11,11,11,11]
$$

And it took 5 cycles to complete it.
{% endtab %}

{% tab title="Input 1" %}
#### Input

```
2
7401 5067 60577 54677 80678 49658 7959 89948 2217 27686
78905 53234 39515 43375 83724 98992 66158 79755 70123 44449
```

#### Output

```
-1
-1
```

#### Explanation

Those series will never converge to same element; therefore, they output as -1.
{% endtab %}
{% endtabs %}

<details>

<summary>Solution </summary>

Sample solution as follows:

```python
def cycle_average(arr):
    final_value = sum(arr) // len(arr)
    counter = 0
    prev_arr = arr[:]

    while len(set(arr)) > 1:
        counter += 1
        prefix_sum = 0
        new_arr = arr[:]

        for i in range(len(arr)):
            prefix_sum += arr[i]  
            arr[i] = prefix_sum // (i + 1)
        
        if arr == new_arr:
            return -1
    
        if all(x == final_value for x in arr):
            break

    return counter

# Read input
N = int(input())
for _ in range(N):
    arr = list(map(int, input().strip().split()))
    print(cycle_average(arr))

```

</details>
