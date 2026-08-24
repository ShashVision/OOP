// C++ program to find area of circle using inline function
#include <iostream>
using namespace std;

inline int area(int r) {

    return 3.14 * r * r;
}

int main(){
int r;
cout << "enter the radius of the circle: ";
cin>>r;
cout<< "the area of the circle is "<<area(r)<<endl;

    return 0;

}