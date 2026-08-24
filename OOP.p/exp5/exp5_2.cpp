//2. Write an inline function to find the maximum of two numbers. 

#include <iostream>
using namespace std;

inline int max(int a, int b){

    return (a>b)? a:b;

}

int main() {
    int a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "The maximum of "<<a<<" and "<<b<<" is "<<max(a,b)<<endl;
    return 0;
}