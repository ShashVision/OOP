//Write a c++ code to create a class which calculates area of a circle.

#include <iostream>
using namespace std;
const float pie=3.14;
class Circle {
    float r,area;

public:
void accept(){
    cout<<"Enter the radius of the circle: ";
    cin>> r;
}
void calculate(){
    area=pie*(r*r);
}
void display(){
    cout<<"Area of circle is: "<<area<<endl;
}
};

int main() {
    Circle c;
    c.accept();
    c.calculate();
    c.display();
    return 0;
}