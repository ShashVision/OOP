// Write a program to calculate the average using a friend function. 
#include <iostream>
using namespace std;

class Student {
private:
    int marks[5];
public:
    void accept();
    friend float avg(Student s);
};

void Student::accept() {
    cout << "Enter marks for 5 subjects: ";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
    }
}

float avg(Student s) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += s.marks[i];
    }
    return (float)sum / 5;
}

int main() {
    Student s;
    s.accept();
    cout << "Average: " << avg(s) << endl;
    return 0;
}