Divisible by 11 using `if (number / 11 == 0)` is too easy. Let's try solving it using Vedic math!

### Info:
Vedic Math is a method which is by calculating the sum of the odd place digits and even place digits.  
If they are equal to each other, then we can prove that the number is divisible by 11.

### Sample 1
`Input`
```
161051
```

`Output`
```
True
```

`Explanation`
```
Even : 6+0+1=7
Odd  : 1+1+5=7
Even == Odd : True, so it is divisible by 11.
```



### Sample 2
`Input`
```
101325
```

`Output`
```
False
```

`Explanation`
```
Even : 0+3+5=8
Odd  : 1+1+2=4
Even == Odd : False, so it is not divisible by 11.
```
