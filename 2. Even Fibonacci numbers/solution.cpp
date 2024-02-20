#include <iostream>

using namespace std;

int main() {
  // Initialize the first two Fibonacci numbers.
  int a = 1;
  int b = 2;

  // Initialize the sum of even-valued Fibonacci numbers.
  int sum = 0;

  // Iterate over the Fibonacci sequence until the next number exceeds 4 million.
  while (b <= 4000000) {
    // If the current number is even, add it to the sum.
    if (b % 2 == 0) {
      sum += b;
    }

    // Update the next two Fibonacci numbers.
    int c = a + b;
    a = b;
    b = c;
  }

  // Print the sum of even-valued Fibonacci numbers.
  cout << sum << endl;

  return 0;
}
