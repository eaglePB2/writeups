---
icon: calendar
description: >-
  https://www.hackerrank.com/contests/codenection-2024-test/challenges/cn24-test2
---

# Codey and Sunday

## Question

Codey wanted to take a break and relax, and it wonder how many days are left until the next Sunday.

### Input Format

The first line is a string `s` , the current day of the week.

### Constraints

`s` is Monday to Saturday.

### Output Format

Output an integer, the number of days from the given day until the next Sunday.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
Wednesday
```

#### Output

```
4
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution - Dictionary Lookup</summary>

Create a list which stores all the values of Sunday to Saturday:

{% code title="Dictionary" lineNumbers="true" %}
```python
days = ["Sunday", "Monday", ... , "Saturday"]
```
{% endcode %}

Then, receive the input, lookup with the index based on Input, then use 7 to subtract that index to get the answer. Simple.&#x20;

Here's the solution:

{% code overflow="wrap" lineNumbers="true" %}
```python
days = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"]

print((7 - days.index(input())))
```
{% endcode %}

</details>
