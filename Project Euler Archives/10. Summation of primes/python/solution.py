import math 
 
def isprime(n): 
    for x in range(2, math.floor(math.sqrt(n)+1)): 
        if n%x == 0: 
            return False     
    else: 
        return True 
 
sum = 0 
n = 2 
while True: 
    if isprime(n): 
        sum = sum + n 
    n = n + 2 if n > 2 else n + 1 
    if n > 2000000:            
        break
print(sum) 

'Probability to get time limit error'
