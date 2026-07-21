#include <iostream>
using namespace std;

int main(){
	float km, m, cm, mm;
	
	cout << "Enter distance in km: ";
	cin >> km;
	
	m = km * 1000;
	cm = km * 100000;
	mm = km * 1000000;
	
	cout << "Distance in meters = " << m << "m\n";
	cout << "Distance in centimeters = " << cm << "cm\n";
	cout << "Distance in millimeters = " << mm << "mm";
	
	return 0;
}