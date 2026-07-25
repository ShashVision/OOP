/*Write a C++ program to dynamically allocate memory for an array of n integers. 
Accept the elements, calculate their sum and average, display the results, and release the 
memory using delete[]*/
#include <iostream>
using namespace std;
int main () {
    
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    double average = static_cast<double>(sum) / n;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    delete[] arr;
    arr = nullptr;

    return 0;
}