//HardDrive.cpp
#include "HardDrive.h"

using namespace std;

HardDrive::HardDrive() : _size(0) {}

HardDrive::HardDrive(const int& size)
{
	SetSize(size);
}

HardDrive::HardDrive(const HardDrive& drive)
	: _size(drive._size) 
{}

int HardDrive::GetSize()
{
	return _size;
}

void HardDrive::SetSize(const int& size)
{
	if (size >= 0)
		_size = size;
	else
	{
		cerr << "Incorrect hard drive size!" << endl;
		exit(1);
	}
}

HardDrive& HardDrive::operator = (const HardDrive& drive)
{
	_size = drive._size;
	return *this;
}

HardDrive::operator string() const
{
	stringstream ss;
	ss << _size << "Mb";
	return ss.str();
}

ostream& operator << (ostream& out, const HardDrive& r)
{
	return out << (string)r;
}

istream& operator >> (istream& in, HardDrive& r)
{
	cout << "Input hard drive size(Mb): ";
	do { in >> r._size;
	} while (r._size < 0);
	return in;
}
