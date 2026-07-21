#include <iostream>
using namespace std;

int main(){
	float basic_salary, hra, da, gross_salary;
	
	cout << "Enter Basic Salary: ";
	cin >> basic_salary;
	
	hra = basic_salary * 0.2;
	da = basic_salary * 0.4;
	gross_salary = basic_salary + hra + da;
	
	cout << "Gross Salary = " << gross_salary;
	return 0;
}