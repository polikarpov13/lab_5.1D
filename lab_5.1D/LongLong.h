#pragma once
#include <string>
#include "Pair.h"
class LongLong : public Pair
{
public:
	LongLong();
	LongLong(double, double);
	LongLong(const LongLong&);

	LongLong operator + (LongLong r);
	LongLong operator * (LongLong r);

};

