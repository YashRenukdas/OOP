#include <iostream>
using namespace std;

int main(){
	int celsius;
	float farenheit;
	
	cout << "Enter temperature in celsius: ";
	cin >> celsius;
	
	farenheit = celsius * 9/5 + 32;
	cout << "Temperature in farenheit: " << farenheit;
	
	return 0;
}