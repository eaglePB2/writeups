---
description: >-
  https://www.facebook.com/codingcompetitions/hacker-cup/2011/final-round/problems/C
icon: map-location-dot
---

# Safest Place

## Question

While en route to the 295th annual Galactic Dance Party on Risa, you find yourself unceremoniously yanked out of hyperspace and, according to your sensors, surrounded by **N** space bombs. Apparently caught in a trap laid out by some dastardly and unknown enemy, and unable to return to hyperspace, you must find the safest place in the vicinity to weather the detonation of all the space bombs. Your unseen opponent has constructed a cube-shaped space anomaly that you are unable to leave, so your options are limited to points within that cube.

Before the bombs explode (all simultaneously), you have just enough time to travel to any integer point in the cube \[0, 0, 0]-\[1000, 1000, 1000], both inclusive. You must find the point with the maximum distance to the nearest bomb, which your captain's intuition tells you will be the safest point.

### Input Format

The first line of the input file consists of a single number **T**, the number of test cases. Each test consists of single number **N**, the number of bombs, followed by **3\*N** integers describing the positions of the bombs.

### Constraints

$$
T = 50
$$

$$
1 ≤ N ≤ 200
$$

* All bombs coordinates will be in \[0, 1000], both inclusive.

### Output Format

Output **T** integers, one per test case each on its own line, representing the square of distance to the nearest bomb from the safest point in the cube.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
5
5
0 0 0
1000 1000 1000
1000 500 0
0 1000 500
500 0 1000
10
0 0 0
1000 1000 1000
1000 500 0
0 1000 500
500 0 1000
583 583 583
1000 0 500
500 1000 0
0 500 1000
625 0 0
15
0 0 0
1000 1000 1000
1000 500 0
0 1000 500
500 0 1000
583 583 583
1000 0 500
500 1000 0
0 500 1000
625 0 0
0 625 0
0 0 625
1000 1000 375
1000 375 1000
375 1000 1000
20
0 0 0
1000 1000 1000
1000 500 0
0 1000 500
500 0 1000
583 583 583
1000 0 500
500 1000 0
0 500 1000
625 0 0
0 625 0
0 0 625
1000 1000 375
1000 375 1000
375 1000 1000
491 491 84
491 84 491
84 491 491
1000 453 453
453 1000 453
25
0 0 0
1000 1000 1000
1000 500 0
0 1000 500
500 0 1000
583 583 583
1000 0 500
500 1000 0
0 500 1000
625 0 0
0 625 0
0 0 625
1000 1000 375
1000 375 1000
375 1000 1000
491 491 84
491 84 491
84 491 491
1000 453 453
453 1000 453
453 453 1000
891 891 0
891 0 891
0 891 891
1000 109 109
```

#### Output

```
520667
390625
265929
207418
164387
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution</summary>



</details>
