#include <iostream>
using namespace std;

int main(){
	int s1, s2, s3, s4, s5, s6;
	float percentage, total, average;
	
	cout << "Enter marks for 6 subjects (out of 100):\n";
	cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6;
	
	total = s1+s2+s3+s4+s5+s6;
	percentage = total / 6;
	average = total / 600;
	cout << "Total Marks: " << total;
	cout << "\nPercentage: " << percentage << "%\n";
	cout << "Average: " << average << "\n";
	
	
	if(percentage < 50){
		cout << "Grade F";
	}
	else if(percentage >= 50 && percentage < 60){
		cout << "Grade D";
	}
	else if(percentage >= 60 && percentage < 70){
		cout << "Grade C";
	}
	else if(percentage >= 70 && percentage < 80){
		cout << "Grade B";
	}
	else if(percentage >= 80 && percentage < 90){
		cout << "Grade A";
	}
	else if(percentage >= 90){
		cout << "Outstanding! Grade A+";
	}
	
	if(s1 >= 40 && s2 >= 40 && s3 >= 40 && s4 >= 40 && s5 >= 40 && s6 >= 40){
		cout << "\nResult: Pass";
	} else {
		cout << "\nResult: Fail";
	}
	
	return 0;
}