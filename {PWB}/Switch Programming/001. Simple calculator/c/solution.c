#include<stdio.h>
#include<conio.h>

main() {
    char choice;
    int num1, num2, result;

    printf("\nEnter First Value:");
    scanf("%d", & num1);
  
    printf("\nEnter Second Value:");
    scanf("%d", & num2);
  
    printf("\nEnter Operator(+, -, *, /, %):");
    scanf(" %c", & choice);

    switch (choice) {
        case '+':
            result = num1 + num2;
            printf("\nSum is = %d", result);
            break;

        case '-':
            result = num1 - num2;
            printf("\nDifference is = %d", result);
            printf("\n\nPress Enter Again for New Input\n");
            break;

        case '*':
            result = num1 * num2;
            printf("\nProduct is = %d", result);
            printf("\n\nPress Enter Again for New Input\n");
            break;

        case '/':
            result = num1 / num2;
            printf("\nQuotient is = %d", result);
            printf("\n\nPress Enter Again for New Input\n");
            break;

        case '%':
            result = num1 % num2;
            printf("\nReminder is = %d", result);
            printf("\n\nPress Enter Again for New Input\n");
            break;

        default:
            printf("\nEnter Valid Operator!!!\n");
            printf("\n\nPress Enter Again for New Input\n");
        }
        getch();
}
