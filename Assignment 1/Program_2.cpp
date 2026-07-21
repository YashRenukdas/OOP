#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	float result;
	
	cout << "Enter two integers: ";
	cin >> a >> b;
	
	cout << "Choose Operation:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
	cin >> c;
	
	switch(c){
		case 1:
			result = a + b;
			cout << "Addition: " << a << "+" << b << "=" << result;
			
			break;
			
		case 2:
			result = a - b;
			cout << "Subtraction: " << a << "-" << b << "=" <<  result;
			
			break;
			
		case 3:
			result = a * b;
			cout << "Multiplication: " << a << "*" << b << "=" <<  result;
			
			break;
			
		case 4:
			result = a / b;
			cout << "Division: " << a << "/" << b << "=" <<  result;
			
			break;
			
		default:
			cout << "Invalid Choice.";
			break;
	}
	
	return 0;
}