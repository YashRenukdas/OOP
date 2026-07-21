#include <iostream>
using namespace std;

int main(){
	int n, sum = 0;
	int *arr = new int[n];
	
	cout << "Enter size of array: ";
	cin >> n;
	
	cout << "Enter " << n << " elements into array: ";
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	for(int i = 0; i < n; i++){
		sum += arr[i];
	}
	
	cout << "Sum of array: " << sum << endl;
	cout << "Average of array: " << (float)sum / n;
	
	delete arr;
	return 0;

}