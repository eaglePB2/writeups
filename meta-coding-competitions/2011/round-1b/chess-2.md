---
description: >-
  https://www.facebook.com/codingcompetitions/hacker-cup/2011/round-1b/problems/A
icon: chess
---

# Chess 2

## Question

After decades of shadowy demonstrations and delays from the game’s maker, Chess 2 has finally been released. You waited in line all night to be one of the first to purchase an example of the hot sequel to the classic original, and now you are finally getting a chance to open up your new investment and take a look inside. What you find is slightly puzzling; in addition to the traditional pieces, the game has been expanded to contain a number of pieces that are not actually original.\
\
The best-known piece that has been added to the game is the nightrider. The nightrider can make any number of knight moves in a single direction, i.e., its offset from its initial position will be 2\*<kbd>**m**</kbd> in one dimension and <kbd>**m**</kbd> in the other for some nonzero integer <kbd>**m**</kbd>. Like other "sliding" pieces, if one of the knight moves would cause it to take another piece it is not able to traverse beyond that point\
\
The archbishop is also part of Chess 2. The archbishop can simply make any move that a knight or bishop could legally make.\
\
The strangest new piece is the kraken. The kraken can move to any square on the board, regardless of the position of any other pieces, including its own current position.\
\
You don't feel like reading the manual to learn about how the new pieces fit into the standard chess opening positions, so instead you place some of the pieces randomly on the board. The game you’ve decided to play is simply to count how many pieces on the board are currently being threatened. A piece is threatened if another piece is able to move into its cell and take it (note that if the kraken moves into its own cell it does not take itself).

### Input Format

Your input file will consist of a single integer <kbd>**N**</kbd> followed by <kbd>**N**</kbd> test cases. Each case will consist of, all separated by whitespace, an integer <kbd>**P**</kbd> followed by the identities and positions of <kbd>**P**</kbd> Chess 2 pieces. Pieces are described by a single character <kbd>**C**</kbd> to denote their type (see specification below) followed by two integers <kbd>**R**</kbd> and <kbd>**F**</kbd>, the 1-based rank and file, respectively, of the piece.\
\
You've decided to ignore the colors of the pieces in this game. The color of the pieces will not be reflected in the input and so cannot affect your output.\
\
To make room for the new pieces, the Chess 2 board is a 16 by 16 grid. No specified pieces will fall outside the board, and no two pieces will occupy the same position.\
The types of pieces will be specified as follows, and no entries not present in this table will appear on the board:



| Piece      | Abbreviation |
| ---------- | ------------ |
| King       | K            |
| Queen      | Q            |
| Rook       | R            |
| Bishop     | B            |
| Knight     | N            |
| Nightrider | S            |
| Archbishop | A            |
| Kraken     | E            |

### Constraints

$$
N = 20
$$

$$
3 ≤ P ≤ 64
$$

$$
1 ≤ R, F ≤ 16
$$

* <kbd>**C**</kbd> will be one of {K, Q, R, B, N, S, A, E}

### Output Format

Output a single integer, the number of threatened pieces on the board, for each test case separated by whitespace.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
5
4
Q 1 1
B 3 1
B 5 1
B 1 4

3
S 1 1
K 2 3
S 3 5

4
N 1 1
B 3 3
Q 5 5
N 4 1

5
R 2 2
N 1 2
N 2 1
N 16 2
N 2 16

6
Q 1 1
Q 2 3
Q 3 5
Q 4 2
Q 5 4
E 1 5
```

#### Output

```
2
1
3
4
6
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution</summary>



</details>
