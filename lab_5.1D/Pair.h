#pragma once
#include <string>
#include <iostream>

using namespace std;

class Pair
{
private:
	double older, younger;
public:
	double getOlder() const { return older; }
	double getYounger() const { return younger; }

	void setOlder(double value) { older = value; }
	void setYounger(double value) { younger = value; }

	Pair();
	Pair(double older, double younger);
	Pair(const Pair& p);
	~Pair(void);

	void Compare();

	operator string () const;

	friend ostream& operator << (ostream& out, const Pair& p);
	friend istream& operator >> (istream& in, Pair& p);
};

