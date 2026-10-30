//Write a subtraction program.

#include <iostream>
using namespace std;

class Number {
public:
    int x;
    Number(int a) { x = a; }

    Number operator-(Number n) {
        return Number(x - n.x);
    }
};

int main() {
    Number a(20), b(10);
    Number c = a - b;
    cout << c.x;
}
