#include <iostream>
using namespace std;

int main(){
	int *value = new int;
	
	cout << "Enter value: ";
	cin >> *value;
	
	cout << "Entered value is: " << *value;
	
	delete value;
	return 0;
}