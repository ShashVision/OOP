//Program to find sum and average of vector elements.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};
    int sum = 0;

    for (int x : v)
        sum += x;

    cout << "Sum: " << sum;
    cout << "\nAverage: "
         << (float)sum / v.size();
}
