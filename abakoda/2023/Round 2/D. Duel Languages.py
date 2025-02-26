# Question Link: https://codeforces.com/group/cRJbcAFEwS/contest/487230/problem/D

# Solution

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