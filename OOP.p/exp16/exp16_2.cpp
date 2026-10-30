//Overload equality (==) to compare two strings using member function.

#include <iostream>
#include <string>
using namespace std;

class Text {
public:
    string str;
    Text(string s) { str = s; }

    bool operator==(Text t) {
        return str == t.str;
    }
};

int main() {
    Text a("Hello"), b("Hello");
    cout << (a == b);
}
