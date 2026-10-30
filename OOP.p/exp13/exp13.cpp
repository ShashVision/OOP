//Student Result Program Using Derived Class Pointer

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
    float marks1, marks2;
};

class Result : public Student {
public:
    void grade() {
        float avg = (marks1 + marks2) / 2;
        cout << "Average: " << avg << endl;
        cout << "Grade: "
             << (avg >= 75 ? "A" : avg >= 60 ? "B" :
                 avg >= 40 ? "C" : "F");
    }
};

int main() {
    Result r, *p = &r;
    cin >> p->name >> p->roll >> p->marks1 >> p->marks2;
    p->grade();
}
