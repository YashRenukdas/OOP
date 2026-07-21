#include <iostream>
using namespace std;

int main(){
	int length, width, area, perimeter;
	
	cout << "Enter length & width: ";
	cin >> length >> width;
	
	area = width*length;
	perimeter = 2*(length + width);
	
	cout << "Area of Rectangle: " << area << "\n";
	cout << "Perimeter of Rectangle: " << perimeter;
	
	return 0;
}