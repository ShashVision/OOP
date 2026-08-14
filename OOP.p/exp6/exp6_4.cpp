// Implement a friend function to display employee details. 
#include <iostream>
using namespace std;
class Employee{
    int id;
    string name;
    string post;
    public:
    void acc(){
        cout<<"Enter employee id: ";
        cin>>id;
        cout<<"Enter employee name: ";
        cin>>name;
        cout<<"Enter employee post: ";
        cin>>post;
    }
    friend void display(Employee e);
};

void display(Employee e){
    cout<<"Employee id: "<<e.id<<endl;
    cout<<"Employee name: "<<e.name<<endl;
    cout<<"Employee post: "<<e.post<<endl;
}

int main(){
    Employee e;
    e.acc();
    display(e);
    return 0;
}