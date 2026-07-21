#include <iostream>
using namespace std;

int main(){
	float price, gst_perc, gst_amnt, gst;
	
	cout << "Enter product price and gst percentage: ";
	cin >> price >> gst_perc;
	
	gst = (price * gst_perc) / 100.0;
	gst_amnt = price + gst;
	
	cout << "GST = " << gst;
	cout << "\nPayable amount = " << gst_amnt;
	
	return 0;
}