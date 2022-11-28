#include <iostream>

using namespace std;

int main() {
    char a;
    cout << "Press Any Key : ";
    cin >> a;

    if (a >= 65 && a <= 90) {
        cout << "Uppercase";
    } else if (a >= 97 && a <= 122) {
        cout << "Lowercase\n";
    } else if (a >= 48 && a <= 57) {
        cout << "Digit\n";
    } else {
        cout << "Symbol\n";
    }
}
