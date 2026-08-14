// Write a program using a friend function to compare two objects. 
#include <iostream>
using namespace std;

class Compare{
    int a,b;
    public:
    void input(){
        cout<<"Enter two numbers: ";
        cin>>a>>b;
    }
    friend void compare(Compare c);
};

void compare(Compare c){
    if(c.a==c.b){
        cout<<"The two numbers are equal"<<endl;
    }
    else if(c.a>c.b){
        cout<<"The first number is greater than the second number"<<endl;
    }
    else{
        cout<<"The second number is greater than the first number"<<endl;
    }
    
}

int main(){
    Compare c;
    c.input();
    compare(c);
    return 0;
}