//Program to overload decrement (--) using member function.
#include <iostream>
using namespace std;

class Number {
private:
    int value;
public:
    Number(int v) : value(v) {}
    void display() {
        cout << "Value: " << value << endl;
    }
    Number operator--() {
        --value;
        return *this;
    }
};

int main() {
    Number n(10);
    n.display();
    --n;
    n.display();
    return 0;
}