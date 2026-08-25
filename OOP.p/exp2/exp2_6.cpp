/*Write a C++ program to display the marks of five subjects in a neatly aligned table 
using the different manipulator*/
#include <iostream>
using namespace std;
int main() {
    
    int marks[5];
    cout << "Enter the marks of five subjects: ";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
    }

    cout << "-------------------------------" << endl;
    cout << "| Subject | Marks |" << endl;
    cout << "-----------------------------------" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "|   " << (i + 1) << "     |  " << marks[i] << "   |" << endl;
        cout << "-----------------------------" << endl;
    }

    return 0;
}