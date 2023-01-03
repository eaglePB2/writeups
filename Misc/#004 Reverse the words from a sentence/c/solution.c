#include<stdio.h>
#include<string.h>

char * strrev(char * str) {
    char * p1, * p2;

    if (!str || ! * str)
        return str;
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2) {
        * p1 ^= * p2;
        * p2 ^= * p1;
        * p1 ^= * p2;
    }
    return str;
}

void main() {
    char str[100];
    int i, j;

    puts("\n\nEnter The String Want To Reverse Word By Word:\n");
    gets(str);
    printf("\nString After Word By Word Reverse \n\n");

    strrev(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i + 1] == ' ' || str[i + 1] == NULL) {
            for (j = i; j >= 0 && str[j] != ' '; j--)
                printf("%c", str[j]);
        } else
            continue;
        printf(" ");
    }
    getch();
}
