#include <iostream>
using namespace std;

int main(){
	int a, b, c, x, result;
	
	cout << "Enter values of A, B, C and X: ";
	cin >> a >> b >> c >> x;
	
	result = a * x * x + b * x + c;
	cout << "ax^2 + bx + c = " << result;
	
	return 0;
}