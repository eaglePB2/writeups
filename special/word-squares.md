---
description: 'Difficulty: Medium/Hard'
---

# Word Squares

## Question

Peter wonders that if given a rectangle N \* M, with his English dictionary, is possible to fit the words inside the square, which horizontally and vertically are legit English words, while unique. He uses his dictionary to find all the words which has the length of 4 for each side and tries to fit into the square. And finally, he found one of the examples, which as follows:

|  R  |  E  |  S  |  T  |
| :-: | :-: | :-: | :-: |
|  O  |  V  |  E  |  R  |
|  S  |  I  |  T  |  E  |
|  E  |  L  |  S  |  E  |

Which in this table, `rest, over, site, else, rose, evil, sets` and `tree` are all found in the English dictionary. Now he wonders that how many possibilities does this suffice, given the size of the rectangle and the dictionary source.

### Input Format

The first line (which is provided) will read the input.txt, which consists of a list of vocabularies. The second line is the size of the rectangle <kbd>N</kbd> and <kbd>M</kbd>.

### Constraints

$$
3 \le len(lines) \le N, M \le 10
$$

$$
10^2 \le lines \le 10^5
$$

* The lines are all in small capitals a-z, no spaces in a line, one word per line.
* All lines are unique.

### Output Format

Output a value which determines the number of ways that words in <kbd>input.txt</kbd> can fit into the rectangle.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
## Input.txt
rest
over
site
else
away
were
area
year
```

#### Output

```
1
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution </summary>



</details>
