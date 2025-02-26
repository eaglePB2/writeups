---
description: >-
  https://www.facebook.com/codingcompetitions/hacker-cup/2011/round-1a/problems/B
icon: lamp
---

# Turn on the Lights

## Question

A simple game consists of a grid of <kbd>RxC</kbd> buttons. Each button will be either lighted, or unlighted. Whenever you push a button, the state of that button, and its (up to) four neighbors will toggle -- lighted buttons will become unlighted and unlighted buttons will become lighted. Note that the neighbors do not 'wrap' and thus a corner button has only two neighbors, while an edge button has three.

In this problem you will be given an initial configuration of the buttons. Your task is to push the right buttons so that, when you are done, all of the lights are turned on. If there are multiple ways to do this, you should determine the minimum number of buttons pushes that it can be done in.

### Input Format

You will first read an integer <kbd>N</kbd> the number of test cases. For each test case, you will read two integers <kbd>R</kbd> and <kbd>C</kbd>. This will be followed by <kbd>R</kbd> whitespace-separated tokens, each containing <kbd>C</kbd> characters. A 'X' indicates a lighted button, while a '.' indicates an unlighted button.

### Constraints

$$
N = 20
$$

$$
1 \le R, C \le 18
$$

### Output Format

For each test case you should output the minimum number of button presses required to turn on all the lights. If there is no way to do this, you should output -1.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
5
5 6
XXXXXX
XXX.X.
XXXXXX
X.XXXX
XXXXX.
1 13
..XXXXXXX.X..
11 6
XXXXXX
XXXXXX
XXXXXX
XXXXXX
XXXXXX
XXXXXX
XXXXXX
.X.XXX
XXXX.X
XXXXXX
XXX.XX
10 13
..XX...X.X.X.
XX..X..X.....
.X...........
X........X...
.....XX..X.X.
.X..XX.......
.X.....X.X...
.X....X......
......XX...X.
..X....X.....
9 3
...
...
...
...
...
..X
...
...
...
```

#### Output

```
14
7
27
65
11
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution</summary>



</details>
