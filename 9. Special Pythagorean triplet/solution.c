#include <stdio.h>

int main()
{
    const int sum = 1000;
    int a;
  //since a won't be above of 1/3 of 1000;
    for (a = 1; a <= sum/3; a++)
    {
        int b;
      //since a > b, b won't be above of 1/2 of 1000;
        for (b = a + 1; b <= sum/2; b++)
        {
            int c = sum - a - b;
            if ( a*a + b*b == c*c ) {
               printf("a=%d, b=%d, c=%d\n",a,b,c);
               printf("product of abc = %d",a*b*c);
               return 0;
            }
        }
    }
}
