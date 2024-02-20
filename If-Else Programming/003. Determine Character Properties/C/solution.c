#include <stdio.h>

void main() {
    char a;
    printf("Press Any Key : ");
    scanf("%c", & a);

    if (a >= 65 && a <= 90) {
        printf("Uppercase");
    } 
    else if (a >= 97 && a <= 122) {
        printf("Lowercase");
    } 
    else if (a >= 48 && a <= 57) {
        printf("Digit");
    } 
    else {
        printf("Symbol");
    }
}
