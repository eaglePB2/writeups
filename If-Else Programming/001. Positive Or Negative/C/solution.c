#include<stdio.h>

int main() {
    int a;
    printf("Enter The Number You Want To Check :\n");
    scanf("%d",&a);
 
    if(a<0) {
      printf("Negative\n");
    }
    else if(a>0) {
      printf("Positive\n");
    } 
    else {
     printf("Neutral");
    }
    return 0;

}
