Your task is find the minimum values that was given by user, then run the repeating times of prefix averages algorithm, until all of the numbers are same.  

### Info
Prefix Averages Algorithm is used to calculate average of the previous values.  
That algorithm is widely used in financian analysis.  
Usage: The i-th prefix average of an array X is the average of the first(i+1) elements of X:

$A[i] = \frac{X[0] + X[1] + ... + X[i]}{i+1}$

### Input
User will enter the size of the array, and enter the contents of the array.

### Output
System will output all the procedures, after that, report the times to complete the cycle to user.

### Sample 1
`Input`
```
8
11 23 5 27 33 1 45 18
```

`Output`
```
1 12 9 14 17 16 20 20 
1 6 7 9 10 11 12 13 
1 3 4 5 6 7 8 8 
1 2 2 3 3 4 4 5 
1 1 1 2 2 2 2 3 
1 1 1 1 1 1 1 1 
6
```

### Sample 2
`Input`
```
5
101325 999999 8763 1599 20
```

`Output`
```
20 500009 336260 252595 222341 
20 250014 278763 272221 262245 
20 125017 176265 200254 212652 
20 62518 100434 125389 142841 
20 31269 54324 72090 86240 
20 15644 28537 39425 48788 
20 7832 14733 20906 26482 
20 3926 7528 10872 13994 
20 1973 3824 5586 7268 
20 996 1939 2850 3734 
20 508 985 1451 1907 
20 264 504 741 974 
20 142 262 382 500 
20 81 141 201 261 
20 50 80 110 140 
20 35 50 65 80 
20 27 35 42 50 
20 23 27 31 34 
20 21 23 25 27 
20 20 21 22 23 
20 20 20 20 21 
20 20 20 20 20
22
```
