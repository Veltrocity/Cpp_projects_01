// Cats Creator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <std_lib_facilities.h>

class cat{
public:
	cat(){ cout << "Mr. Kitty is being generated"; }
	~cat(){ cout << "Mr. Kitty is going on a business trip"; }

	void Set_Name(String x){
		Cat_Name = x;
		cout << "Enter a Name for your Cat. ";
		cin >> Cat_Name;
	}
	void set_Color(String x){
		Cat_Color = x;
		cout << "Eneter the Cats Color.";
		cin >> Cat_Color;
		if (Cat_Color == "Brown" || Cat_Color == "brown"){
			Life = 1000;
		}
		cout << Life;
	}
	String Cat_stats(String x, String y){
		return Cat_Name;
		return Cat_Color;

	}


private:
	String Cat_Name;
	String Cat_Color;
	double Life;

};



int main(){

	cat *kitty = new cat;
	kitty->Set_Name;
	kitty->set_Color;
	kitty->Cat_stats;








	keep_window_open();
	return 0;
}