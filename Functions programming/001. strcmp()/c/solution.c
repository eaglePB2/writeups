#include<stdio.h>
#include<string.h>

void main()
{

 while(1)
 {
    char a[100], b[100];

    printf("\n\nEnter The First String: ");
    gets(a);

    printf("\n\nEnter The Second String: ");
    gets(b);

    if (strcmp(a,b) == 0)
       printf("\n\nStrings Are Equal\n");
    else
       printf("\n\nStrings Are Not Equal");
 }
   return 0;
}
