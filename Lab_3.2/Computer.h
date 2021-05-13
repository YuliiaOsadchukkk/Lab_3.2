//Computer.h
#pragma once
#include "HardDrive.h"

using namespace std;

class Computer 
{
	HardDrive _hardDrive;
	string _brand;
	int _price;
public:

	HardDrive GetHardDrive() const { return _hardDrive; }
	string GetBrand() const { return _brand; }
	int GetPrice() const { return _price; }

	void SetHardDrive(const HardDrive& value) { _hardDrive = value; }
	void SetBrand(const string& value) { _brand = value; }
	void SetPrice(const int& value);/////

	Computer();
	Computer(const int& size, const string& brand, const int& price);
	Computer(const  Computer& s);

	Computer& operator = (const  Computer& s);
	operator string() const;

	friend ostream& operator << (ostream& out, const  Computer& s);
	friend istream& operator >> (istream& in, Computer& s);
};


