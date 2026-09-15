#include <iostream>
using namespace std;
class Student{
	public:
	int rollno;
	string name;
	float marks;
	
	 Student ()
	 {
	 	rollno= 101;
		name="Shashwat";
	 	marks=45; 
	 	cout<<"DEFUALT: Student's Name:"<<name<<" Roll number:"<<rollno<<" Marks:"<<marks<<endl;
	 }
	 

};
int main(){
	Student s1;
	return 0;
}
