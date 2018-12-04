// ClassPractice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <std_lib_facilities.h>
#include <string>
#include <iostream>



class Person
{
public:
	string name;
	int age;
	string major;
	string pet;
	void getName(){
		cin >> name >> age >> major >> pet;
		cout << endl;
	}
};

int main(){

	Person Austin;
	Person Marlo;
	Austin.getName();
	Marlo.getName();
	


	keep_window_open();
	return 0;
}