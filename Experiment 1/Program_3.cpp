#include <iostream>
using namespace std;

int main(){
	int units, bill;
	
	cout << "Enter number of electricity units consumed: ";
	cin >> units;
	
	if(units <= 100){
		bill = units * 2;
	}
	else if(units <= 200){
		bill = 200 + (units - 100) * 3;
	}
	else {
		bill = 500 + (units - 200) * 5;
	}
	
	cout << "Electricity Bill: Rs" << bill;
	return 0;
}