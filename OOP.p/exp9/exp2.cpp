#include <iostream>
using namespace std;
class Student{
	public:
	int rollno;
	string name;
	float marks;
	
	 Student (int r, string n, float m)
	 {
	 	 rollno = r; 
        name = n;
        marks = m;
	 	
	 }	
	 Student (Student &std)
	 {
	 	 rollno = std.rollno; 
        name = std.name;
        marks = std.marks;
	 	
	 }	
	 
	 

};
int main(){
	
	 Student s1(101,"Shashwat",98.67); 
    cout << "Name: " << s1.name<<endl
	 << " Rollno:" << s1.rollno <<endl
	 << " Marks:"<< s1.marks<< endl;
	 cout<<"==================================="<<endl;
	 cout<<"";
	  Student s2(102,"Yash",98.76); 
    cout <<"Name: " << s2.name<<endl
	 << " Rollno:" << s2.rollno<<endl
	 << " Marks:"<< s2.marks<< endl;
	return 0;
}
