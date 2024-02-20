#include<stdio.h>

int main() {
   float amount, rate, time, si;

   printf("Enter Principal Amount\t: ");
   scanf("%f", &amount);

   printf("Enter Rate of Interest\t: ");
   scanf("%f", &rate);

   printf("Enter Period of Time\t: ");
   scanf("%f", &time);

   si = (amount * rate * time) / 100;
   printf("\nSimple Interest : %f", si);

   return 0;
}
