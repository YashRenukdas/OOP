#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float weight, height, bmi;
	
	cout << "Enter weight (kg) and height (m): ";
	cin >> weight >> height;
	
	bmi = weight / (height * height);
	cout << "Your BMI is: " << bmi;
	
	return 0;
}