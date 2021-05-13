//ComputerWithMonitor.h
#pragma once
#include "Computer.h"

using namespace std;

class ComputerWithMonitor : public Computer
{
	int _diagonal;
public:
	int GetDiagonal() const { return _diagonal; }
	void SetDiagonal(const int& value);/////

	ComputerWithMonitor();
	ComputerWithMonitor(const int& size, const std::string& brand, const int& price, const int& diagonal);
	ComputerWithMonitor(const ComputerWithMonitor& s);

	ComputerWithMonitor& operator = (const ComputerWithMonitor& s);
	operator string() const;

	friend ostream& operator << (ostream& out, const ComputerWithMonitor& s);
	friend istream& operator >> (istream& in, ComputerWithMonitor& s);
};