---
description: https://www.facebook.com/codingcompetitions/hacker-cup/2011/round-2/problems/A
icon: book-arrow-up
---

# Bonus Assignments

## Question

You are in charge of a group of **N** workers, and you want to pay a one-time bonus to each of them. The bonus for each worker is an integer number of dollars. According to state law the bonus of the worker who gets the least should be no less than **A**, but no more than **B**. To motivate your staff, the bonus of the worker who gets the most should be no less than **C** and no more than **D**.

Workers tend to spend their entire bonuses on HackerCola. Each of them buys bottles of HackerCola until he runs out of money, i.e., until amount of money left is less than the price of one bottle. Workers are very individualistic and each of them uses his own money only, so they never pool to buy HackerCola. Unfortunately you don't remember the price of one bottle of HackerCola, but you are pretty sure that it is an integer number of dollars greater than 1.

Since you care about the working class you want to assign bonuses to workers in such a way that there would be at least one worker who would have some money left after buying as much HackerCola as possible regardless of the price of the bottle. Calculate the number of possible bonus assignments that fit this constraint. Two bonus assignments are different if at least one worker gets different bonus in each assignment. Since the answer can be large, calculate it modulo $$10^9+7$$.

### Input Format

The first line of the input contains one integer **T**, the number of test cases. Each of the next **T** lines consists of 5 integers separated by spaces: **N**, **A**, **B**, **C** and **D**.

### Constraints

$$
T = 20
$$

$$
1 ≤ N ≤ 10^6
$$

$$
1 ≤ A ≤ B ≤ 10^6
$$

$$
1 ≤ C ≤ D ≤ 10^6
$$

### Output Format

For each of the test cases print a line containing number of possible bonus assignments modulo $$10^9+7$$.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
5
2 1 2 4 5
2 2 4 3 5
1 5 10 5 10
5 5 7 2 3
5 2 7 5 12
```

#### Output

```
6
10
0
0
149190
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution</summary>



</details>
