
#include <iostream>
using namespace std;

class Birthday {
public:
    int day, month, year;
};

int main() {
    Birthday b[5], *p = b;

    for (int i = 0; i < 5; i++)
        cin >> (p+i)->day >> (p+i)->month >> (p+i)->year;

    for (int i = 0; i < 5; i++)
        cout << (p+i)->day << "/"
             << (p+i)->month << "/"
             << (p+i)->year << endl;
}
