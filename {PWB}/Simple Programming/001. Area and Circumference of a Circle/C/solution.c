#include <stdio.h>
#define PI 3.14

int main()
{
   int rad;
   float area, ci;

   printf("\nEnter radius of circle: ");
   scanf("%d", &rad);

   area = PI * rad * rad;
   printf("\nArea of circle : %.2f ", area);

   ci = 2 * PI * rad;
   printf("\nCircumference : %.2f ", ci);

   return 0;
}
