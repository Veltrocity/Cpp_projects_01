// LoopPractice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <std_lib_facilities.h>

int main()
{

	int num_of_cats;
	int total = 0;
	cin >> num_of_cats;

	for (int i = 0; i > 0; i++)
	{
		cout << num_of_cats;
		total = total + num_of_cats;

		cout << num_of_cats << endl;
		i--;
	
	}

	keep_window_open();
	return 0;
}
