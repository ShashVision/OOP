//Overload greater-than (>) using friend function.

#include <iostream>
using namespace std;

class Number {
    int x;
public:
    Number(int a) { x = a; }

    friend bool operator>(Number a, Number b);
};

bool operator>(Number a, Number b) {
    return a.x > b.x;
}

int main() {
    Number a(20), b(10);
    cout << (a > b);
}
