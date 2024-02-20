#include <iostream>
#include <cmath>

#define INPUT 100

using namespace std;

int main()
{
    //squares of sum - sum of square
    cout<< int(pow((INPUT + 1) * (INPUT / 2),2) - (INPUT * (INPUT + 1) * (2 * INPUT + 1)) / 6);
    return 0;
}
