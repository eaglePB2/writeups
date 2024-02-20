#include <stdio.h>

int main()
{
    int i, j, k, l, num;
    printf("Enter an integer: ");
    scanf("%d", &num);  
   
    for (i = 1; i <= num; i++)
    {
        for (j = num; j > i; j--)
        {
            printf(" ");
        }
        for (k = i; k >= 1; k--)
        {
            printf("*");
        }
        for (l = 2; l <= i; l++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
