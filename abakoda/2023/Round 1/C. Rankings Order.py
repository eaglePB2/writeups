# Question Link: https://codeforces.com/group/cRJbcAFEwS/contest/485694/problem/C

# Solution
counter = int(input())
score_list = {}

for i in range(0, counter):
    name, score = input().split()
    score = int(score)
    if name in score_list and score_list[name] < score:
        score_list[name] = score
    elif name not in score_list:
        score_list[name] = score

sorted_scores = sorted(score_list.items(), key=lambda x: (-x[1], x[0]))

for name, score in sorted_scores:
    print(name, score)
