---
description: >-
  https://www.hackerrank.com/contests/codenection-2023-test/challenges/challenge-1-250
icon: font-case
---

# Codey and Alphabetical Scoring

## Question

`A` has score of 1, `B` has score of 2, ... `Z` has score of 26. Given a string `s`, find the score of the string.

### Input Format

The first line contains a string `s`.

### Constraints

$$
1 \le |s| \le 3000
$$

* It is guaranteed that all the letters in string `s` are uppercase alphabetical letters.

### Output Format

Output the total score of the string.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
ABC
```

#### Output

```
6
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution 1 - Dictionary Lookup</summary>

Create a dictionary which stores all the values of A to Z:

```python
alphabet = {
    "A": 1
    "B": 2
    ...
    "Z": 26
}
```

Then, receive the input, break them into char arrays, lookup for numbers, add onto one variable, print that variable, and done.

Here's the solution:

```python
alphabet = {
    "A": 1, 
    "B": 2, 
    "C": 3, 
    "D": 4, 
    "E": 5, 
    "F": 6, 
    "G": 7, 
    "H": 8, 
    "I": 9, 
    "J": 10, 
    "K": 11, 
    "L": 12, 
    "M": 13, 
    "N": 14, 
    "O": 15, 
    "P": 16, 
    "Q": 17, 
    "R": 18, 
    "S": 19, 
    "T": 20, 
    "U": 21, 
    "V": 22, 
    "W": 23, 
    "X": 24, 
    "Y": 25, 
    "Z": 26
}

user_input = input().strip().upper()
print(sum(alphabet[char] for char in input_string if char in alphabet))
```

Realisticly, the actual competition won't be that easy to compress the code into 1 line. It's ok if you prefer traditional, easier to understand method to write the code. If test case passes, then no issue about that.

</details>

<details>

<summary>Solution 2 - Char Calculation</summary>

If you want to save some time onto other questions, you can look through ASCII value for each character instead.

Given A is 65, all you need to do is convert the words into chars, convert them into ASCII value, then subtract 64 to all of them. Finally adds them to solve it.

Here's the full code:

```python
letter_values = {chr(i): i - 64 for i in range(65, 91)}

def calculate_total_value(input_string):
    return sum(letter_values[char] for char in input_string if char in letter_values)

user_input = input().strip().upper()
print(calculate_total_value(user_input))
```

Personally, I don't recommend this method as this one easily caught AI detection. In competitive programming which you can't get any help with, this code itself is too optimized that almost nobody would believe it was done without referring information.

</details>
