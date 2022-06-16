#include "Pair.h"
#include <sstream>

Pair::Pair() {
	older = 0;
	younger = 0;
}

Pair::Pair(double older, double younger) {
	this->older = older;
	this->younger = younger;
}

Pair::Pair(const Pair& p) {
	this->older = p.older;
	this->younger = p.younger;
}

Pair::~Pair() {

}

void Pair::Compare() {
	if (getOlder() + getYounger() == getOlder() * getYounger())
		cout << getOlder() + getYounger() << "  is equal  " << getOlder() * getYounger() << " \n ";

	if (getOlder() + getYounger() != getOlder() * getYounger())
		cout << getOlder() + getYounger() << "  is not equal  " << getOlder() * getYounger() << " \n ";

	if (getOlder() + getYounger() > getOlder() * getYounger())
		cout << getOlder() + getYounger() << "  is bigger than " << getOlder() * getYounger() << " \n ";

	if (getOlder() + getYounger() < getOlder() * getYounger())
		cout << getOlder() + getYounger() << "  is less than " << getOlder() * getYounger() << " \n ";

	if (getOlder() + getYounger() >= getOlder() * getYounger())
		cout << getOlder() + getYounger() << "  is bigger/equal than  " << getOlder() * getYounger() << " \n ";

	if (getOlder() + getYounger() <= getOlder() * getYounger())
		cout << getOlder() + getYounger() << "  is less/equal than  " << getOlder() * getYounger() << " \n ";
}

Pair::operator string() const {
	stringstream ss;

	ss << endl;
	ss << "Older : " << older << endl;
	ss << "Younger : " << younger << endl;

	return ss.str();
}

ostream& operator << (ostream& out, const Pair& p) {
	out << string(p);
	return out;
}

istream& operator >> (istream& in, Pair& p) {
	double older, younger;

	cout << endl;

	cout << "Older : "; in >> older;
	cout << "Younger : "; in >> younger;

	p.setOlder(older);
	p.setYounger(younger);

	return in;
}
