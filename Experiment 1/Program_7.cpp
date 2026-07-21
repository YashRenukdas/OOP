#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float loan, mr, time, emi, AR;
	
	cout << "Enter loan, rate and time (in months): ";
	cin >> loan >> AR >> time;
	
	mr = (AR/12) * 0.01;
	emi = (loan * mr * pow(1+ mr, time)) / (pow(1 + mr, time) - 1);
	
	cout << "EMI = " << emi;
	return 0;
}