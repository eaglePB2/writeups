#include <stdio.h>

int main()
{
    int i, ans=0;
    for (i = 0; i < 1000; i++){
        if (i % 3 == 0 || i % 5 == 0){
            ans += i;
        }
    }
    printf("%d",ans);

    return 0;
}
