// CallByPractice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <std_lib_facilities.h>
const double convert = 12;

double conversion(int num_inches, int num_feet);
int main(){
	int inch, feet;
	int total;
	cout << "Enter the number of inches and feet you want converted" << endl;
	cin >> inch >> feet;
	total = conversion(inch, feet);

	cout << total << endl;



	keep_window_open();
	return 0;
}
	double conversion(int num_inches, int num_feet){
		return(num_inches * convert);
	
	}