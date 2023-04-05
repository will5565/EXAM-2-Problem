#pragma once
#include <iostream>

using namespace std;

class Student {
public:
	Student (const string& mcStudName = "", unsigned int id = 999);
	bool operator== (const Student& rcStudent) const;
	friend ostream& operator<< (ostream& rcOut, const  Student& rcStudent);
private:
	string mcName;
	unsigned int mID;
};