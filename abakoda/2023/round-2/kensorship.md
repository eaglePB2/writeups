---
icon: k
description: https://codeforces.com/group/cRJbcAFEwS/contest/487230/problem/C
cover: ../../../.gitbook/assets/image (2).png
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

# Kensorship

## Question

Kody desided that the nekst step in eliminating hiram na titik is implementing a tekst pilter to kensor out all their okkurenses in the Abakoda Diskord tsannel. He wants this tekst pilter to habe the pollowing punktionality, and asks you to kode it por him.

A word is a contiguous sequence of upper and/or lowercase English letters (A to Z and a to z). Any other characters are either spaces or punctuation, which are used to separate (or delimit) the different words in a text. To censor a word means to replace it with a number of asterisks \* equal to that word's original length (e.g. duck becomes \*\*\*\*). Note that spaces and punctuation should never be included in censorship, as they are not part of a word.

Rather than only censoring hiram na titik, let's make our program a little bit more general. First, you will be given a string describing the set of forbidden letters. Then, you will be given a single line of text, which contains one or more words separated by spaces/punctuation. Censor every word in that line of text that contains a forbidden letter, leaving spaces, punctuation, and non-forbidden words exactly the same.

## Input Format

First, a line containing some number of distinct uppercase English letters, describing the set of forbidden letters in this test case. Note that the lowercase forms of these letters are forbidden, too.

This is followed by another line, the text that needs to be censored.

## Constraints

* At least one letter will be forbidden.
* The text will not begin or end with spaces.
* There will never be two consecutive spaces in the text.
* The text will contain at least one word.
* The text will only contain upper and/or lowercase English letters, spaces, and punctuation characters from among `.,?!'-";()`
* The text will not exceed $$10^5$$ characters in length (this includes spaces and punctuation).

## Output Format

Output the exact same line of text from the input, but having censored all words that contain a forbidden letter.

## Sample Inputs:

{% tabs %}
{% tab title="Input 0" %}
#### Input

```
CFJQVXZ
Pack my box with five dozen liquor jugs.
```

#### Output

```
**** my *** with **** ***** ****** ****.
```
{% endtab %}

{% tab title="Input 1" %}
#### Input

```
CFJQVXZ
"Ang hindi magmahal sa sariling wika, daig pa ang hayop at malansang isda."
```

#### Output

```
"Ang hindi magmahal sa sariling wika, daig pa ang hayop at malansang isda."
```
{% endtab %}

{% tab title="Input 2" %}
#### Input

```
NOI
What counts as a word? Our definition's far from perfect.
```

#### Output

```
What ****** as a ****? *** **********'s far **** perfect.
```

#### Explanation

definition's is treated as two separate words (definition & s). However, for this problem, the definition should be strictly followed in order to get an Accepted.
{% endtab %}
{% endtabs %}

***

<details>

<summary>Solution — Special Character = space</summary>

Extension of Problem B.

Basically, we just need to break a sentence into several strings, for each string, break each string to chars. if one of the chars contains the censorship characters, we will turn all string into asterisks.  That's all I guess?

Here's the solution for now:

```python
import string

def censor_words(input_check, key):
    for i in key:
        if i in input_check:
            return True
    return False

characters = input().lower()
sentence = input()
result = []
for word in sentence.split():
    censored_word = "*" * len(word) if censor_words(word.lower(), characters) else word
    if word[-1] in string.punctuation:
        result.append(censored_word[:-1] + word[-1])
    else:
        result.append(censored_word)
print(" ".join(result))
```

</details>

