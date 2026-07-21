#include <iostream>
using namespace std;

int main(){
	int s1, s2, s3, s4, s5;
	float percentage, total;
	
	cout << "Enter marks for 5 subjects (out of 100):";
	cin >> s1 >> s2 >> s3 >> s4 >> s5;
	
	total = s1+s2+s3+s4+s5;
	percentage = total / 5;
	cout << "Total Marks: " << total;
	cout << "\nPercentage: " << percentage << "%\n";
	
	
	if(percentage < 50){
		printf("Grade F");
	}
	else if(percentage >= 50 && percentage < 60){
		printf("Grade D");
	}
	else if(percentage >= 60 && percentage < 70){
		printf("Grade C");
	}
	else if(percentage >= 70 && percentage < 80){
		printf("Grade B");
	}
	else if(percentage >= 80 && percentage < 90){
		printf("Grade A");
	}
	else if(percentage >= 90){
		printf("Outstanding! Grade A+");
	}
	
	return 0;
}