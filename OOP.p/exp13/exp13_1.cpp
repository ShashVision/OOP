//Banking Application Using Inheritance and Pointers

#include <iostream>
using namespace std;

class Bank {
public:
    float balance;
};

class Account : public Bank {
public:
    void deposit(float amount) {
        balance += amount;
    }
    void display() {
        cout << "Balance: " << balance;
    }
};

int main() {
    Account a, *p = &a;
    p->balance = 1000;
    p->deposit(500);
    p->display();
}
