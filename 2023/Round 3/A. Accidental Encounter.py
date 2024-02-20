# Question Link: https://codeforces.com/group/cRJbcAFEwS/contest/488544/problem/A

# Solution
a, b, c, d = map(int, input().split())

if c < b and a < d:
    print("YES")
else:
    print("NO")