// Make a equation evaluator to take inouts as 3 values a,b,c and then equate the
//expression ax^2 + bx + c

#include <iostream>
using namespace std;

int main() {
    double a, b, c, x, result;

    cout << "Enter values for a, b, c: ";
    cin >> a >> b >> c;
    cout << "Enter value for x: ";
    cin >> x;

    result = (a * x * x) + (b * x) + c;

    cout << "The result of the equation ax^2 + bx + c is: " << result << endl;

    return 0;
}