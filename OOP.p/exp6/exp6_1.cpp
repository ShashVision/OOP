//Write a program to find the maximum of two numbers using a friend function. 
#include<iostream>
using namespace std;
class Num{
    int a,b;
    public: 
    void acc(){
        cout<<"Enter two numbers: ";
        cin>>a>>b;
    }
    friend void max(Num a, Num b);
};

void max(Num a, Num b){
    if(a.a>b.b){
        cout<<"The maximum number is "<<a.a<<endl;
    }
    else{
        cout<<"The maximum number is "<<b.b<<endl;
    }
}

int main(){
        Num n1,n2;
        n1.acc();
        n2.acc();
        max(n1,n2);
        return 0;
    }
 
