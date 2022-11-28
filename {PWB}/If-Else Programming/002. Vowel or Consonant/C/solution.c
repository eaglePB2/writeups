#include <ctype.h>
#include <stdio.h>

int main() {
    
    char a ;
  
    printf("Enter The Character You Want Check Vowel or Not\n");
    scanf("%c",&a);
    
    a = toupper(a);

    if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U') {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    
    return 0;
}
