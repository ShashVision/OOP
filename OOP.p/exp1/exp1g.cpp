// make a EMI calculator to take input of principal amount, 
// rate of interest and time period to calculate EMI.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double principal, rate, time, emi;

    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest (in %): ";
    cin >> rate;
    cout << "Enter time period (in years): ";
    cin >> time;

    rate = rate / (12 * 100);  // Convert annual rate to monthly rate
    time = time * 12;          // Convert years to months

    if (rate == 0) {
        emi = principal / time;
    } else {
        emi = (principal * rate * pow(1 + rate, time)) / (pow(1 + rate, time) - 1);
    }

    cout << "Your EMI is: " << emi << endl;

    return 0;
}