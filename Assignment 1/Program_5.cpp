#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	
	cout << "Enter value of A and B: ";
	cin >> a >> b;
	
	c = a;
	a = b;
	b = c;
	
	cout << "After swapping A and B:\nA = " << a << "\nB = " << b;
	
	return 0;
}