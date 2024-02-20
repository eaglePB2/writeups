#include <iostream>

using namespace std;

int main() {
  long long n = 600851475143;

  long long largestPrimeFactor = 1;

  for (long long i = 2; i * i <= n; i++) {

    if (n % i == 0) {
      largestPrimeFactor = i;

      while (n % i == 0) {
        n /= i;
      }
    }
  }

  if (n > 1) {
    largestPrimeFactor = n;
  }

  cout << largestPrimeFactor << endl;

  return 0;
}
