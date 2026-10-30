
#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    string name;
};

int main() {
    Employee e, *p = &e;
    cin >> p->id >> p->name;
    cout << p->id << " " << p->name;
    return 0;
}
