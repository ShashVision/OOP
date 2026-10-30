//Class template to swap two values of different data types

#include <iostream>
using namespace std;

template <class T, class U>
class Swap {
public:
    void exchange(T &a, U &b) {
        T temp = a;
        a = static_cast<T>(b);
        b = static_cast<U>(temp);
    }
};

int main() {
    int a = 10;
    float b = 20.0;
    Swap<int, float> s;
    s.exchange(a, b);
    cout << a << " " << b;
}
