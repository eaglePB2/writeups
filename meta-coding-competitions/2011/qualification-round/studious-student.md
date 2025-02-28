---
icon: user-graduate
description: >-
  https://www.facebook.com/codingcompetitions/hacker-cup/2011/qualification-round/problems/C
---

# Studious Student

## Question

You've been given a list of words to study and memorize. Being a diligent student of language and the arts, you've decided to not study them at all and instead make up pointless games based on them. One game you've come up with is to see how you can concatenate the words to generate the lexicographically lowest possible string.

### Input Format

As input for playing this game you will receive a text file containing an integer <kbd>**N**</kbd>, the number of words sets you need to play your game against. This will be followed by <kbd>**N**</kbd> word sets, each starting with an integer <kbd>**M**</kbd>, the number of words in the set, followed by <kbd>**M**</kbd> words. All tokens in the input will be separated by some whitespace and, aside from <kbd>**N**</kbd> and <kbd>**M**</kbd>, will consist entirely of lowercase letters.

### Constraints

$$
1 \le N \le 100
$$

$$
1 \le M \le 9
$$

$$
1 \le all\_word\_lengths \le 10
$$

### Output Format

Your submission should contain the lexicographically shortest strings for each corresponding word set, one per line and in order.

### Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
5
6 facebook hacker cup for studious students
5 k duz q rc lvraw
5 mybea zdr yubx xe dyroiy
5 jibw ji jp bw jibw
5 uiuy hopji li j dcyi
```

#### Output

```
cupfacebookforhackerstudentsstudious
duzklvrawqrc
dyroiymybeaxeyubxzdr
bwjibwjibwjijp
dcyihopjijliuiuy
```
{% endtab %}
{% endtabs %}

***

<details>

<summary>58/63 Test Cases Solved</summary>

This is the one which I am working during the contest, and sadly it didn't pass all test cases. \
This code uses a lambda anonymous key function, which first pad all the text into the longest word, and sort by the alphabetical order.

```python
def sort_words_by_length(sentence):
    words = sentence.split()[1:]
    max_len = max(len(word) for word in words)
    padded_words = [(word.ljust(max_len, 'z'), word) for word in words]
    sorted_words = sorted(padded_words)
    return ''.join(word[1] for word in sorted_words)

cases = int(input())
for i in range(1, cases+1):
	print("Case #%d: %s" % (i, sort_words_by_length(input())))
```

This may not work if the string has duplicated values.

</details>

<details>

<summary>Current Solution — Brute Force Permutation</summary>

The current working solution is simple — brute force all the permutation of the combinations and take the minimum as the result.

Personally, I am not a fan of using brute force to list out all possible combinations, but since it has only 63 test cases, I would take it.

Here's the solution, if you want simple and crude solution:

```python
from itertools import permutations

def sort_words_by_length(sentence):
    words = sentence.split()[1:]
    return min("".join(p) for p in permutations(words))

cases = int(input())
for i in range(1, cases+1):
	print("Case #%d: %s" % (i, sort_words_by_length(input())))
```

Note that I imported a library called itertools, which it may or may not work in different contests. Luckily this contest accepts the library imports.\
Another note: this took O(N!) time complexity.

</details>
