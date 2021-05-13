//Computer.cpp
#include "Computer.h"

using namespace std;

void Computer::SetPrice(const int& value)
{
	if (value >= 0)
		_price = value;
	else
	{
		cerr << "Incorrect price!" << std::endl;
		exit(1);
	}
}

Computer::Computer()
	: _hardDrive(0), _price(0), _brand("")
{}

Computer::Computer(const int& size, const string& brand, const int& price) : _hardDrive(size), _brand(brand)
{
	SetPrice(price);
}

Computer::Computer(const Computer& v)
	: _hardDrive(v._hardDrive), _brand(v._brand), _price(v._price)
{}

Computer& Computer::operator = (const Computer& v)
{
	_hardDrive = v._hardDrive;
	_brand = v._brand;
	_price = v._price;
	return *this;
}

Computer::operator string() const
{
	stringstream ss;
	ss << "Hard drive size = " << GetHardDrive().GetSize() << "Mb" << endl;
	ss << "Brand = " << GetBrand() << endl;
	ss << "Price = " << GetPrice() << "UAH";
	return ss.str();
}

ostream& operator <<(ostream& out, const Computer& s)
{
	return out << string(s);
}

istream& operator >>(istream& in, Computer& s)
{
	in >> s._hardDrive;

	cout << "Input brand = ";
	in >> s._brand;
	cout << "Input price = ";
	do { in >> s._price;
	} while (s._price < 0);
	return in;
}
