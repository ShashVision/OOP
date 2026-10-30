
#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;

    void display() {
        cout << this->roll << " " << this->name;
    }
};

int main() {
    Student s = {1, "Amit"};
    s.display();
}
