The Hong Kong Identity Card consists of 1 English letter and 6 numeric digits.  
A check digit, which could be 0 to 9 or A, is appended in brackets.  
It is calculated as follows:
- For letters, A is converted to value 1, B to value 2, and so on.
- For every HKID number *LD<sub>1</sub>D<sub>2</sub>D<sub>3</sub>D<sub>4</sub>D<sub>5</sub>D<sub>6</sub>*, the sum is S = $8L + 7D_1 + 6D_2 + 5D_3 + 4D_4 + 3D_5 + 2D_6$
- The check digit c shall be the smallest non-negative integer such that $s+c = 0 (mod 11)$. If c is 10, A is used instead.  

Write a program to determine if the Identity Card is valid.

### Sample 1
`Input`
```
A123456(3)
```
`Output`
```
True
```

### Sample 2
`Input`
```
C876300(0)
```
`Output`
```
False
```
