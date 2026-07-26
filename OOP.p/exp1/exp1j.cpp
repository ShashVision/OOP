// Make a student result analysis program to take input of marks for 
//five subjects and calculate total marks, percentage, and grade based 
//on the percentage. Display pass/fail.

#include <iostream>
using namespace std;
int main() {
    double s1, s2, s3, s4, s5, marks, percent;
    char grade;

    cout << "Enter marks obtained for five subjects: ";
    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    marks = s1 + s2 + s3 + s4 + s5;
    percent = (marks / 500) * 100;

    if (percent >= 90) {
        grade = 'A';
    }
     else if (percent >= 80) {
        grade = 'B';
    } 
    else if (percent >= 70) {
        grade = 'C';
    } 
    else if (percent >= 60) {
        grade = 'D';
    } 
    else {
        grade = 'F';
    }

    cout << "Total Marks: " << marks << endl;
    cout << "Percentage: " << percent << "%" << endl;
    cout << "Grade: " << grade << endl;

    if (grade == 'F') {
        cout << "Result: Fail" << endl;
    } else {
        cout << "Result: Pass" << endl;
    }

    return 0;
}
