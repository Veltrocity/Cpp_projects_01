// Monster.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <std_lib_facilities.h>
class monster{
public:

	monster(){ "Monster"; }
	~monster(){ "Dead"; }

	void set_Name(String x){
		name = x;
		
	}
	String get_Name(){
		cout << "Enter a name";
		cin >> name;
		return name;
	}

	void set_Life(int x){
		life = x;
		cout << "Enter the amount of life this Monster has";
		cin >> life;
	}
	int get_Life(){
		return life;
	}




private:
	String name;
	int life;


};

int main(){

	monster monkey;
	monkey.set_Name();
	monkey.set_Life(0);









	keep_window_open();
	return 0;
}