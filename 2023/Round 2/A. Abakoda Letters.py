# Question Link: https://codeforces.com/group/cRJbcAFEwS/contest/487230/problem/A

# Solution

char = input().lower()

for i in 'abkd':
    if char == i:
        print('Abakoda')
        exit(0)

print('Boring')