//Make a GST calculator to take input of cost price and 
//GST rate to calculate final price.
#include <iostream>
using namespace std;

int main() {
    double costPrice, gstRate, finalPrice;

    cout << "Enter cost price: ";
    cin >> costPrice;
    cout << "Enter GST rate (in %): ";
    cin >> gstRate;

    finalPrice = costPrice + (costPrice * gstRate / 100);

    cout << "The final price including GST is: " << finalPrice << endl;

    return 0;
}