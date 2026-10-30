//Write a program to calculate area of square, rectangle and circle using function overloading

#include <iostream>
using namespace std;

void area(int a) {
    cout << "Square: " << a*a << endl;
}
void area(int l, int b) {
    cout << "Rectangle: " << l*b << endl;
}
void area(double r) {
    cout << "Circle: " << 3.14*r*r << endl;
}

int main() {
    area(5);
    area(4, 6);
    area(3.5);
}

