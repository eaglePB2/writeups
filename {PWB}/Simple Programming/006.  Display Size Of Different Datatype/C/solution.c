#include <stdio.h>
int main()
{ 
  printf("int is\t\t %2lu bytes \n", sizeof(short int));
  printf("long int is\t %2lu bytes \n", sizeof(long int));
  printf("float is\t %2lu bytes \n", sizeof(float));
  printf("double is\t %2lu bytes \n", sizeof(double));
  printf("long double is\t %2lu bytes \n", sizeof(long double));
  printf("char is\t\t %2lu bytes \n", sizeof(char));
  return 0;
} 
// lu -> unsigned long int
