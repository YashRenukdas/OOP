#include <iostream>
using namespace std;

class Student{
	private:
		int rollNo, marks;
		string name;
		
	public:
		void accept();
		void display();
};

void Student::accept(){
	cout << "Enter rollNo, marks and name: ";
	cin >> rollNo >> marks >> name;
}

void Student::display(){
	cout << "RollNo: " << rollNo << endl;
	cout << "Marks: " << marks << endl;
	cout << "Name: " << name << endl;
}

int main(){
	Student s1;
	
	s1.accept();
	s1.display();
	
	return 0;
}