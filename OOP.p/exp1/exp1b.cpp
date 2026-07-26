// Make a percentage and grade calculator to take input of marks 
// and calculate percentage and grade based percentage.
#include <iostream>
using namespace std;
int main() {
    double s1,s2,s3,s4,s5, percentage;
    char grade;

    cout << "Enter marks obtained for five subjects: ";
    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    percentage = (s1 + s2 + s3 + s4 + s5) / 5; 

    if (percentage >= 90) {
        grade = 'A';
    }
     else if (percentage >= 80) {
        grade = 'B';
    }
     else if (percentage >= 70) {
        grade = 'C';
    }
     else if (percentage >= 60) {
        grade = 'D';
    }
     else {
        grade = 'F';
    }

    cout << "Your percentage: " << percentage << "%" << endl;
    cout << "Your grade: " << grade << endl;

    return 0;
}