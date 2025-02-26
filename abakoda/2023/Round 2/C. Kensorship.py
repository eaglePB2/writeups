# Question Link: https://codeforces.com/group/cRJbcAFEwS/contest/487230/problem/C

# Solution

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