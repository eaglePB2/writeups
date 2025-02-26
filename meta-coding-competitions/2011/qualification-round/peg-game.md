---
description: >-
  https://www.facebook.com/codingcompetitions/hacker-cup/2011/qualification-round/problems/B
icon: ball-pile
---

# Peg Game

## Question

At the arcade, you can play a simple game where a ball is dropped into the top of the game, from a position of your choosing. There are a number of pegs that the ball will bounce off of as it drops through the game. Whenever the ball hits a peg, it will bounce to the left with probability 0.5 and to the right with probability 0.5. The one exception to this is when it hits a peg on the far left or right side, in which case it always bounces towards the middle.

When the game was first made, the pegs where arranged in a regular grid. However, it's an old game, and now some of the pegs are missing. Your goal in the game is to get the ball to fall out of the bottom of the game in a specific location. Your task is, given the arrangement of the game, to determine the optimal place to drop the ball, such that the probability of getting it to this specific location is maximized.

The image below shows an example of a game with five rows of five columns. Notice that the top row has five pegs, the next row has four pegs, the next five, and so on. With five columns, there are four choices to drop the ball into (indexed from 0). Note that in this example, there are three pegs missing. The top row is row 0, and the leftmost peg is column 0, so the coordinates of the missing pegs are $$(1,1)$$, $$(2,1)$$ and $$(3,2)$$. In this example, the best place to drop the ball is on the far left, in column 0, which gives a 50% chance that it will end in the goal.

```
x.x.x.x.x
 x...x.x
x...x.x.x
 x.x...x
x.x.x.x.x
 G  

'x' indicates a peg, '.' indicates empty space.
```

### Input Format

You should first read an integer <kbd>N</kbd>, the number of test cases. Each of the next <kbd>N</kbd> lines will then contain a single test case. Each test case will start with integers <kbd>R</kbd> and <kbd>C</kbd>, the number of rows and columns (<kbd>R</kbd> will be odd). Next, an integer <kbd>K</kbd> will specify the target column. Finally, an integer <kbd>M</kbd> will be followed by <kbd>M</kbd> pairs of integers $$r_i$$and $$c_i$$, giving the locations of the missing pegs.

### Constraints

$$
1 \le N \le 100
$$

$$
3 \le R, C \le 100
$$

* The top and bottom rows will not have any missing pegs.
* Other parameters will all be valid, given <kbd>R</kbd> and <kbd>C</kbd>

### Output Format

For each test case, you should output an integer, the location to drop the ball into, followed by the probability that the ball will end in columns <kbd>K</kbd>, formatted with exactly six digits after the decimal point (round the last digit, don't truncate).

### Notes

The input will be designed such that minor rounding errors will not impact the output (i.e. there will be no ties or near -- up to 1E-9 -- ties, and the direction of rounding for the output will not be impacted by small errors).

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
5
5 4 0 1 2 2
3 4 1 1 1 1
3 3 1 2 1 1 1 0
3 4 0 2 1 0 1 1
3 4 0 1 1 1
```

#### Output

```
0 0.375000
1 1.000000
1 1.000000
0 1.000000
0 0.500000
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution</summary>



</details>
