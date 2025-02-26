# Question Link: https://codeforces.com/group/cRJbcAFEwS/contest/487230/problem/B

# Solution

input_check = input().lower()
key = 'cfjqvxz'

for i in key:
    if i in input_check:
        print("FOREIGN")
        exit(0)

print("PINOY")