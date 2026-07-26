// Make a BMI calculator and take input of weight in kgs and height in meters 
//to calculate BMI.
#include <iostream>
using namespace std;
int main() {
    double weight, height, bmi;

    cout << "Enter your weight in kgs: ";
    cin >> weight;
    cout << "Enter your height in meters: ";
    cin >> height;

    bmi = weight / (height * height);

    cout << "Your BMI: " << bmi << endl;

    return 0;
}