
#include <iostream>
using namespace std;

class Box {
public:
    float height, width, breadth;
};

int main() {
    Box b, *p = &b;
    cin >> p->height >> p->width >> p->breadth;
    cout << "Area: " << 2 * (p->height*p->width +
             p->width*p->breadth + p->height*p->breadth);
    cout << "\nVolume: "
         << p->height * p->width * p->breadth;
}
