//Make a gross salary calculator to take input of basic salary and calculate gross 
//salary by considering HRA=20% of basic salary and  DA=40% of  basic salary. 

#include <iostream>
using namespace std;

int main() {
    double bs, hra, da, gross ;

    cout << "Enter basic salary: ";
    cin >> bs;

    hra = 0.2 * bs;
    da = 0.4 * bs;
    gross = bs + hra + da;

    cout << "Your gross salary: " << gross << endl;

    return 0;
}