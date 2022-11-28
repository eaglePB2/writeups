#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int rad;
  float PI = 3.14, area, ci;
  cout<<"Enter radius of circle: ";
  cin>>rad;
  area = PI * rad * rad;
  cout << "Area of circle " << setprecision(2) << fixed << area << endl;
  ci = 2 * PI * rad;
  cout << "Circumference of circle " << setprecision(2) << fixed << ci << endl;
  return 0;
}
