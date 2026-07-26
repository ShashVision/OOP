// Make a distance converter to take input of distance in
// kilometers and convert it into meters, centimeters, and millimeters.
#include <iostream>
using namespace std;
int main() {
    double kilometers, meters, centimeters, millimeters;

    cout << "Enter distance in kilometers: ";
    cin >> kilometers;

    meters = kilometers * 1000;
    centimeters = kilometers * 100000;
    millimeters = kilometers * 1000000;

    cout << "Distance in meters: " << meters << " m" << endl;
    cout << "Distance in centimeters: " << centimeters << " cm" << endl;
    cout << "Distance in millimeters: " << millimeters << " mm" << endl;

    return 0;
}