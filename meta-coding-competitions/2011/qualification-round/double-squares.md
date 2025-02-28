---
icon: square-2
description: >-
  https://www.facebook.com/codingcompetitions/hacker-cup/2011/qualification-round/problems/A
---

# Double Squares

## Question

A double-square number is an integer X which can be expressed as the sum of two perfect squares. For example, 10 is a double-square because $$10=3^2 +1^2$$ . Your task in this problem is, given X, determine the number of ways in which it can be written as the sum of two squares. For example, 10 can only be written as  $$3^2+1^2$$  (We don't count   $$1^2+3^2$$   as being different). On the other hand, 25 can be written as   $$5^2+0^2$$  or as   $$4^2+3^2$$ .

### Input Format

You should first read an integer <kbd>N</kbd>, the number of test cases. The next <kbd>N</kbd> lines will contain <kbd>N</kbd> values of <kbd>X</kbd>.

### Constraints

$$
1 \le x \le 2147483647
$$

$$
1 \le N \le 100
$$

### Output Format

For each value of <kbd>X</kbd>, you should output the number of ways to write <kbd>X</kbd> as the sum of two squares.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
5
10
25
3
0
1
```

#### Output

```
1
2
0
1
1
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution — Loop Until Roots</summary>

A nice way to warm up the brain, huh?

Given $$x^2 +y^2=N$$, we can rewrite it as $$x^2 = N - y^2$$. So that we are able to iterate the $$x^2$$. This is also useful info for us when it comes to the limit of the iteration, which is the root of $$x$$. After that, we can try if we square root the $$y^2$$, transform it to int $$y$$, and it still same. If it does, we proved that the equation is valid thus add a counter in there.

After the iteration of $$\sqrt(x)$$ finishes, output the result.

Here's my solution:

```python
def count_ways(n):
    count = 0
    limit = int(n**0.5)
    
    for x in range(limit + 1):
        y_square = n - x**2
        y = int(y_square**0.5)
        
        if y * y == y_square and x <= y:
            count += 1
        
    return count

i = 0
waste = int(input())
try:
	while True:
		i += 1
		print("Case #%d: %d" % (i, count_ways(int(input()))))
except EOFError:
	exit()
```

Note that I am a big fan of using try and except EOFError method to quickly deal for looping situation, which makes the first input line for me, indeed useless.

</details>
