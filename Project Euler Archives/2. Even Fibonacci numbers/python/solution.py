import math

n1, n2 = 2, 3
count = 0
ans = 0

ipt = 400000
term = round(math.pow(ipt,1/6),0)

#Count by term
for x in range(1,int(term)):
    count = n1 + n2 + n2
    ans += n1 + n2 + n2
    n2 = n1 + n2 + count
    n1 = count
print(ans+2)
