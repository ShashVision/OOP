//5. Write an inline function to swap two numbers. 
#include <iostream>
using namespace std;
inline int swap (int a,int b,int c) {
    c=a;
    a=b;
    b=c;
}

int main(){
    int a,b,c;
    cout << "Enter a: ";
    cin>> a;
    cout<<"Enter b: ";
    cin>>b;

    cout<< "The numbers before swapping: a= "<< a<<", b="<< b<<endl;

    swap(a,b,c);
    
    cout<< "The numbers after swapping: a= "<< b<<", b="<< a<<endl;
    return 0;
}