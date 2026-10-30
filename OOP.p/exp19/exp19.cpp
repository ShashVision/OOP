//Class template to find larger of two values.

#include <iostream>
using namespace std;

template <class T>
class Maximum {
public:
    T large(T a, T b) {
        return a > b ? a : b;
    }
};

int main() {
    Maximum<int> m;
    cout << m.large(10, 20);
}
