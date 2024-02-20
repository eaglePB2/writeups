#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int s = 0, count, check, ans = 1;
    
    cin >> count;
    int n=count;
    
    int A[count], B[count];
    
    for (int i = 0; i < count; i++){
        cin >> A[i];
    }
    
    int min = A[0], pivot, temp;
    for (int i = 0; i < count; i++){
            if(A[i] < min){
                min = A[i];
                pivot = i;
            }
        }
    temp = A[0];
    A[0] = A[pivot];
    A[pivot] = temp;
    
    do{
        check = 1;

        for (int i = 0; i < count; i++){
            s += A[i];
            B[i] = round(s / (i + 1));
            cout << B[i] << " ";
        }
        
        cout << "\n";
        s = 0;
        
        copy(B, B+count, A);
        
        for (int i = 0; i < count; i++){
            if (B[i] != B[0]){
                check = 0;
                ans++;
                break;
            }
        }
        
    }while (check == 0);
    
    cout << "It took " << ans << " Times to complete the cycle.";
    return 0;
}
