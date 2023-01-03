#include<stdio.h>

int main() {
    int arr[50];
    int i, j, k, len;

    printf("Enter No. Of Element:\n");
    scanf("%d", & len);
    printf("Enter %d elements for the array:\n", len);
    for (i = 0; i < len; i++)
        scanf("%d", & arr[i]);

    for (i = 0; i < len - 1; i++) {
        for (j = i + 1; j < len; j++) {

            if (arr[j] == arr[i]) {
                k = j;
                while (k < (len - 1)) {
                    arr[k] = arr[k + 1];
                    k++;
                }
                len--;
                j = i;
            }
        }
    }
    printf("The array after removing duplicates Elements :\n");

    for (i = 0; i < len; i++)
        printf(" %d", arr[i]);

    return 0;
}
