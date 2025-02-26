---
description: https://codeforces.com/group/cRJbcAFEwS/contest/487230/problem/D
icon: d
cover: ../../../.gitbook/assets/image (3).png
coverY: 0
layout:
  cover:
    visible: true
    size: hero
  title:
    visible: true
  description:
    visible: true
  tableOfContents:
    visible: true
  outline:
    visible: true
  pagination:
    visible: true
---

# Duel Languages

## Question

Somehow, Abby managed to convince Cody that while it is admirable to be proud of his country's culture, his crusade against hiram na titik was starting to border on irrational. She tweeted out that she had finally calmed Cody down and placed three hashtags to reflect her mood. But then Abby ran into her own problems—in his short tyrannical frenzy, Cody had already made many followers and many enemies.

* When her hashtags contained Abakoda letters (ABKD and their lowercase), people complained, "Sorry sis, parang like I find it medyo hard to speak Tagalog!"
* When her hashtags contained hiram na titik (CFJQVXZ and their lowercase), people complained, "Eugh, nosebleed! I cannot understand the dire-diretso i-spokening of English!"

Personally, Abby found herself very annoyed with both parties, so she found a way to hopefully shut them both up.

Abby has a pool of $$n$$n possible words that she's okay with using as hashtags. She must select a first hashtag, a second hashtag, and then a third hashtag, such that the following are all satisfied.

* The first hashtag contains an Abakoda letter.
* The second hashtag contains a hiram na titik.
* The third hashtag contains an Abakoda letter and a hiram na titik.
* She cannot use the same word in more than one hashtag. In other words, the three chosen hashtags are distinct.

Note that it is okay for the first hashtag to contain a hiram na titik, so long as it has an Abakoda letter, and vice versa for the second hashtag containing an Abakoda letter.

Given Abby's pool of words, help her count all the possible ways to choose the three hashtags. Note that the order of the three hashtags matters. See the explanation of the third sample input for an example.

## Input Format

The first line of input contains a single positive integer $$n$$<kbd>n</kbd>.

Then, <kbd>n</kbd> lines of input follow, each containing a word that Abby could put in a hashtag.

## Constraints

$$
3 \le n \le 10^5
$$

* Each word consists of at least $$1$$ and at most $$5$$ upper or lowercase English letters.
* No two words in the input are the same. Note that this is case-sensitive (so He and he could both appear in the input as different words).

## Output Format

Output a single line containing the number of possible ways that Abby can choose her three hashtags.

## Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
4
Abkd
Degh
Fil
Rizal
```

#### Output

```
2
```

#### Explanation

We can choose either `Abkd` or `Degh` as our first hashtag, thus we have two possible choices.
{% endtab %}

{% tab title="Input 1" %}
#### Input

```
3
Q
q
Qq
```

#### Output

```
0
```

#### Explanation

None of the words have an Abakoda letter.
{% endtab %}

{% tab title="Input 2" %}
#### Input

```
3
AC
Ac
ac
```

#### Output

```
6
```

#### Explanation

Any of the words could be the first, second, or third hashtag. We could take them in the order `AC, Ac, ac`, and because order matters, this would be different from taking them in the order `Ac, ac, AC`. All possible orderings of them lead to valid ways to choose three hashtags.
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution — Sets intersection</summary>

Here are all the patterns that match with the original problem's requirements, as well as how much each case contributes to the total count.

1. a\_only h\_only both&#x20;
   * a \* h \* b
2. a\_only both both
   * a \* b \* (b - 1)
3. both h\_only both&#x20;
   * b \* h \* (b - 1)
4. both both both
   * b \* (b - 1) × (b - 2)

Here's the solution for now:

```python
def has_a_letter(word, letters):
    return any(c.upper() in letters for c in word)

abakoda = 'ABKD'
hiram = 'CFJQVXZ'

n = int(input())
a, h, b = 0, 0, 0

for _ in range(n):
    word = input()
    has_abakoda = has_a_letter(word, abakoda)
    has_hiram = has_a_letter(word, hiram)
    if has_abakoda and not has_hiram:
        a += 1
    elif not has_abakoda and has_hiram:
        h += 1
    elif has_abakoda and has_hiram:
        b += 1

total = 0
'''
Here are all the patterns that match with the original problem's requirements, as well as how much each case
contributes to the total count.

• #a_only #h_only #both
    ◦ a * h * b
• #a_only #both #both
    ◦ a * b * (b - 1)
• #both #h_only #both
    ◦ b * h * (b - 1)
• #both #both #both
    ◦ b * (b - 1) × (b - 2)
'''
total += a * h * b
total += a * b * (b-1)
total += b * h * (b-1)
total += b * (b-1) * (b-2)
print(total)
```

</details>

