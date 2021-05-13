//ComputerWithMonitor.cpp
#include "ComputerWithMonitor.h"

using namespace std;

void ComputerWithMonitor::SetDiagonal(const int& value)
{
	if (value >= 0)
		_diagonal = value;
	else
	{
		cerr << "Incorrect diagonal!" << std::endl;
		exit(1);
	}
}

ComputerWithMonitor::ComputerWithMonitor()
	: Computer(), _diagonal(0)
{}

ComputerWithMonitor::ComputerWithMonitor(const int& size, const string& brand, const int& price, const int& diagonal)
	: Computer(size, brand, price)
{
	SetDiagonal(diagonal);
}

ComputerWithMonitor::ComputerWithMonitor(const ComputerWithMonitor& v)
	: Computer(v), _diagonal(v._diagonal)
{}

ComputerWithMonitor& ComputerWithMonitor::operator = (const ComputerWithMonitor& n)
{
	Computer::operator = (n);
	_diagonal = n._diagonal;
	return *this;
}

ComputerWithMonitor::operator string() const
{
	stringstream ss;
	ss << (Computer)*this << endl;

	ss << "Diagonal = " << _diagonal;
	return ss.str();
}

ostream& operator <<(ostream& out, const ComputerWithMonitor& s)
{
	return out << string(s);
}

istream& operator >> (istream& in, ComputerWithMonitor& s)
{
	in >> (Computer&)s;
	cout << "Diagonal = ";
	do { in >> s._diagonal;
	} while (s._diagonal < 0);
	return in;
}
