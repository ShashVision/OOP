// Make a electricy bill calculator to take input of units
// consumed and calculate total bill amount by considering the following rates:
// First 100 units: Rs 2 per unit. next 100 units: Rs 3 per unit.
// beyond 200 units: Rs 5 per unit.
#include <iostream>
using namespace std;

int main() {
    double units, bill;

    cout << "Enter number of units consumed: ";
    cin >> units;

    if (units <= 100) {
        bill = units * 2;
    } else if (units <= 200) {
        bill = (100 * 2) + ((units - 100) * 3);
    } else {
        bill = (100 * 2) + (100 * 3) + ((units - 200) * 5);
    }

    cout << "Your total electricity bill: Rs " << bill << endl;

    return 0;
}