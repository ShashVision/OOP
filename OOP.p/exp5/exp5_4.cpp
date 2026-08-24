//4. Write an inline function to calculate simple interest. 
#include <iostream>
using namespace std;
inline float simpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}
int main() {
    float p, r, t,i;
    cout << "Enter principal amount: ";
    cin >> p;
    cout << "Enter rate of interest: ";
    cin >> r;
    cout << "Enter time (in years): ";
    cin >> t;
    
    i = simpleInterest(p, r, t);
    cout << "The simple interest is: " << i << endl;
    
    return 0;
}