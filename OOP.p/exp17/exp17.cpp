//Program to demonstrate virtual function using base pointer.

#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base Class";
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived Class";
    }
};

int main() {
    Derived d;
    Base *p = &d;
    p->show();
}
