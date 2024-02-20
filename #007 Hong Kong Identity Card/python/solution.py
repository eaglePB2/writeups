def check_hkid(hkid):
  # Check the length of the HKID
  if len(hkid) != 10:
    return False

  # Check that the first character is a letter
  if not hkid[0].isalpha():
    return False

  # Check that the remaining characters are digits
  if not hkid[1:7].isdigit():
    return False

  # Check that the check digit is a digit or the letter 'A'
  if not (hkid[8].isdigit() or hkid[8] == 'A'):
    return False

  # Check that the check digit is enclosed in brackets
  if hkid[9] != ')':
    return False

  # Calculate the sum
  s = 8 * (ord(hkid[0]) - ord('A') + 1)
  s += 7 * int(hkid[1])
  s += 6 * int(hkid[2])
  s += 5 * int(hkid[3])
  s += 4 * int(hkid[4])
  s += 3 * int(hkid[5])
  s += 2 * int(hkid[6])

  # Calculate the check digit
  c = 11 - s % 11
  if c == 11:
    c = 0
  elif c == 10:
    c = 'A'
  else:
    c = str(c)

  # Compare the calculated check digit with the one in the HKID
  return c == hkid[8]

# Test the function
print(check_hkid("A123456(3)"))  # should print True
print(check_hkid("A123456(1)"))  # should print False
