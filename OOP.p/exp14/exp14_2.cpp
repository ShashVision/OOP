//Overload a function to calculate volume of cube and cuboid

#include <iostream>
using namespace std;

void volume(int a) {
    cout << "Cube: " << a*a*a << endl;
}
void volume(int l, int b, int h) {
    cout << "Cuboid: " << l*b*h << endl;
}

int main() {
    volume(5);
    volume(2, 3, 4);
}
