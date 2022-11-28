#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float b,h,area;

    cout << "Enter Height and Base Of Triangle : ";
    cin >> h >> b;

    area = (h*b)/2;
    cout << "Area of Triangle is: " << setprecision(2) << fixed << area << endl;
    return 0;

}
