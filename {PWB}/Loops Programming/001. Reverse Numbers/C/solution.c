#include<stdio.h>

int main()
{
    int num, remain, reverse = 0;

    printf("Enter Any Number to be Reversed :\n");
    scanf("%d", &num);

    while (num >= 1) {
       remain = num % 10;
       reverse = reverse * 10 + remain;
       num /= 10;
    }
    
    printf("\nReversed Number : %d", reverse);
    return 0;
}
