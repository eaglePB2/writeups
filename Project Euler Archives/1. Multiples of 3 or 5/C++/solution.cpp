#include <iostream>

using namespace std;

int main()
{
    int ans=0;
    for (int i = 0; i < 1000; i++){
        if (i % 3 == 0 || i % 5 == 0){
            ans += i;
        }
    }
    cout<<ans;

    return 0;
}

//time complexity = O(n)
//space complexity = O(n)
