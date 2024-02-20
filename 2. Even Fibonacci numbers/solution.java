import java.util.Scanner;

public class solution {

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    // Initialize the first two Fibonacci numbers.
    long a = 1;
    long b = 2;

    // Initialize the sum of even-valued Fibonacci numbers.
    long sum = 0;

    // Iterate over the Fibonacci sequence until the next number exceeds 4 million.
    while (b <= 4_000_000) {
      // If the current number is even, add it to the sum.
      if (b % 2 == 0) {
        sum += b;
      }

      // Update the next two Fibonacci numbers.
      long c = a + b;
      a = b;
      b = c;
    }

    // Print the sum of even-valued Fibonacci numbers.
    System.out.println(sum);
  }
}
