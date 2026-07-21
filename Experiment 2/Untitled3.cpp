#include <iostream>
using namespace std;

namespace Physics{
	int marks = 98;
}

namespace Chemistry{
	int marks = 90;
}

int main(){
	cout << "Physics marks: " << Physics::marks << endl;
	cout << "Chemistry marks: " << Chemistry::marks;
	
	return 0;
}