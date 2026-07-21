#include <iostream>
using namespace std;

int main(){
	int a, b;
	
	cout << "Enter value of A and B: ";
	cin >> a >> b;
	
	b = a + b;
	a = b - a;
	b = b - a;
	
	cout << "After swapping A and B:\nA = " << a << "\nB = " << b;
	
	return 0;
}