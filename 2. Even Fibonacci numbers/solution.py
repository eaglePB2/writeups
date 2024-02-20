def even_fibonacci_sum(limit):

  a = 1
  b = 2

  sum = 0

  while b <= limit:
    if b % 2 == 0:
      sum += b

    c = a + b
    a = b
    b = c

  return sum

print(even_fibonacci_sum(4_000_000))