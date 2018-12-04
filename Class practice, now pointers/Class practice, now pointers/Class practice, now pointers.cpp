// Class practice, now pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <std_lib_facilities.h>
#include<iostream>
using namespace std;

class monster{
public:
	monster(){ cout << "Monster"; }
	~monster(){ cout << "destroying monster"; }
	void setName(string name){
		name = name;
		cout << "Enter a Name";
		cin >> name;
	}
	string getName(){
		return name;
	}
	void set_Life(int x){
		life = x;
		cout << "enter the amount of life: ";
		cin >> life;
	}
	int get_Life(){
		return life;
	}
	void stats(){
		cout << name << " " << life;
	}


private:
	string name = " ";
	int life;


};

int main(){

	monster monkey;
	monkey.setName("");
	monkey.set_Life(0);
	monkey.stats();








	keep_window_open();
	return 0;
}