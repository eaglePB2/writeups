#include <iostream>

using namespace std;

int main() {
  int largestPalindrome = 0;

  for (int i = 100; i <= 999; i++) {
    for (int j = 100; j <= 999; j++) {
      int product = i * j;

      if (isPalindrome(product)) {
        largestPalindrome = max(largestPalindrome, product);
      }
    }
  }

  cout << largestPalindrome << endl;

  return 0;
}

bool isPalindrome(int number) {
  int reversedNumber = 0;
  while (number > 0) {
    reversedNumber = reversedNumber * 10 + number % 10;
    number /= 10;
  }

  return reversedNumber == number;
}
