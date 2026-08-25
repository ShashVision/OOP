//Find the area of rectangle by casting double data into float and integer type.
#include <iostream>
using namespace std;
int main() {
    double l, b,a1,a2;
    float area1;
    int area2;

    cout << "Enter the length of the rectangle: ";
    cin >> l;
    cout << "Enter the width of the rectangle: ";
    cin >> b;
    a1 = l*b;
    a2 = l*b;

    area1 = (float)a1;
    area2 = (int)a2;

    cout << "Area of rectangle (float): " << area1 << endl;
    cout << "Area of rectangle (int): " << area2 << endl;

    return 0;
}