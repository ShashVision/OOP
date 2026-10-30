//Overload a function to calculate maximum of two integers and floats.

#include <iostream>
using namespace std;

int maximum(int a, int b) {
    return a > b ? a : b;
}
float maximum(float a, float b) {
    return a > b ? a : b;
}

int main() {
    cout << maximum(10, 20) << endl;
    cout << maximum(4.5f, 6.2f);
}
