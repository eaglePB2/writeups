#include<iostream>

using namespace std;

int main()
{
    long int num, remain, reverse = 0;

    cout << "Enter The Number To Be Reverse: \n";
    cin >> num;

    while (num > 0) {
       remain = num % 10;
       reverse = reverse * 10 + remain;
       num /= 10;
    }
    
    cout << reverse;
    return 0;
}
