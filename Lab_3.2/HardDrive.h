//HardDrive.h
#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class HardDrive
{
	int _size;
public:

	int GetSize();/////
	void SetSize(const int& size);/////

	HardDrive();
	HardDrive(const int& size);
	HardDrive(const HardDrive& drive);

	HardDrive& operator = (const HardDrive& drive);
	operator string() const;

	friend ostream& operator << (ostream& out, const HardDrive& r);
	friend istream& operator >> (istream& in, HardDrive& r);
};


