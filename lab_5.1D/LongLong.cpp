#include "LongLong.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

LongLong::LongLong()
	: Pair()
{ }

LongLong::LongLong(double a, double b)
	: Pair(a, b)
{ }

LongLong::LongLong(const LongLong& l)
	: Pair(l)
{ }

LongLong LongLong::operator + (LongLong l) {
	LongLong l1(0, 0);

	l1.setOlder(this->getOlder() + l.getOlder());
	l1.setYounger(this->getYounger() + l.getYounger());

	return l1;
}

LongLong LongLong::operator * (LongLong l) {
	LongLong l1(0, 0);

	l1.setOlder(this->getOlder() * l.getOlder());
	l1.setYounger(this->getYounger() * l.getYounger());

	return l1;
}
