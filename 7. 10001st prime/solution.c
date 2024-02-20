#include <stdio.h>
 
int main()
{
    int numberToTest, divisor, numberOfPrime;
    // when the number is N, so the divisor will start adding itself from 2 to N. If there's no any sufficient to make N % divisor = 0 (no remainder), then that must be a prime number; otherwise, the if(divisor == number) will turn false, so that number you have found is not a prime; then add the number to N+1, so on (until you had reached 100 based on your code below // 
        for(numberToTest = 1; numberToTest > 0; numberToTest++){
            for(divisor = 2; divisor < numberToTest; divisor++){
                //divisor is 2 so it can eliminate all the numbers dividable by 2 and so on
                //if number divide by same value is 0, then the loop is jumped out
                if(numberToTest%divisor == 0){
                    break;
                }
            }
            // if divisor is same as the number (as prime number is only able to divide by 1 and itself only)
            if(divisor == numberToTest){
                numberOfPrime++;
                if(numberOfPrime == 10001){
                    printf("%d",numberToTest);
                    return 0;
                }
            }
        }
}
