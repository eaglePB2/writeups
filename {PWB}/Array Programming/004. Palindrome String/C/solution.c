#include<stdio.h>
#include<string.h>

void remove_spaces(char* s) {
    char* d = s;
    do {
        while (*d == ' ') {
            ++d;
        }
    } while (*s++ = *d++);
}


void main() {

    while (1) {
        char string1[20];
        int i, length;
        int flag = 0;
        printf("\n\nEnter a String: ");
        scanf("%[^\n]%*c", &string1);
        remove_spaces(string1);
        length = strlen(string1);
        
        for ( i = 0; i <= length; i++)  
        {  
            if (string1[i] >= 65 && string1[i] <= 90)  
            string1[i] = string1[i] + 32;
        }  
        
        for (i = 0; i < length; i++) {
            if (string1[i] != string1[length - i - 1]) {
                flag = 1;
                break;
            }
        }
        
        if (flag) {
            printf("\n\n%s Is Not a Palindrome\n", string1);
        } else {
            printf("\n\n%s Is Palindrome\n", string1);
        }
    }
}
