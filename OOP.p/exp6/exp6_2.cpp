// Write a program to add private members of two different classes. 
#include <iostream>
using namespace std;
class a{
    int x;
    public:
    void acc(){
        cout<<"Enter a number: ";
        cin>>x;
    }
    friend void add(a,b);
};

class b{
    int y;
    public:
    void acc(){
        cout<<"Enter a number: ";
        cin>>y;
    }
    friend void add(a,b);
};

void add(a obj1, b obj2){
    cout<<"The sum of the two numbers is "<< obj1.x + obj2.y <<endl;
}

int main(){
    a obj1;
    b obj2;
    obj1.acc();
    obj2.acc();
    add(obj1,obj2);
    return 0;
}
