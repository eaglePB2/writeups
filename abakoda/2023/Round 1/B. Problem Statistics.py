# Question Link: https://codeforces.com/group/cRJbcAFEwS/contest/485694/problem/B

# Solution
counter = int(input())
arr_list = [0] * counter
all_freq = {}

for i in range(0, counter):
    arr_list[i] = input()
    for j in arr_list[i]:
        all_freq[j] += 1

print(str(all_freq["A"]) + " " + str(all_freq["B"]) + " " + str(all_freq["K"]) + " " + str(all_freq["D"]))