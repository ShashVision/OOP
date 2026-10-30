//Program to count characters in a text file.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("data.txt");
    char ch;
    int count = 0;

    if (!file) {
        cout << "File not found";
        return 1;
    }

    while (file.get(ch))
        count++;

    cout << "Characters: " << count;
    file.close();
}
