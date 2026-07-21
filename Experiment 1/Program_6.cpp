#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int choice;
	double a, b;
	
	cout << "Scientific Calculator: Choose an operation";
	cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Square Root\n6. Power\n7. Sine\n8. Cosine\n9. Logarithm\n";
	cin >> choice;
	
	switch(choice){
		case 1:
			cout << "Enter two numbers: ";
			cin >> a >> b;
			cout << "Result: " << a+b;
			
			break;
			
		case 2:
			cout << "Enter two numbers: ";
			cin >> a >> b;
			cout << "Result: " << a-b;
			
			break;
		
		case 3:
			cout << "Enter two numbers: ";
			cin >> a >> b;
			cout << "Result: " << a*b;
			
			break;
			
		case 4:
			cout << "Enter two numbers: ";
			cin >> a >> b;
			cout << "Result: " << a/b;
			
			break;
			
		case 5:
			cout << "Enter a number: ";
			cin >> a;
			cout << "Result: " << sqrt(a);
			
			break;
			
		case 6:
			cout << "Enter base and exponent: ";
			cin >> a >> b;
			cout << "Result: " << pow(a, b);
			
			break;
			
		case 7:
			cout << "Enter angle: ";
			cin >> a;
			cout << "Result: " << sin(a);
			
			break;
			
		case 8:
			cout << "Enter angle: ";
			cin >> a;
			cout << "Result: " << cos(a);
			
			break;
			
		case 9:
			cout << "Enter a number: ";
			cin >> a;
			cout << "Result: " << log(a);
			
			break;
			
		default:
			cout << "Invalid Choice.";
	}
	return 0;
}