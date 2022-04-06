#include "RationalSet.h"
#include "Rational.h"
#include <iostream>

using namespace std;

RationalSet::RationalSet () {

}

RationalSet::RationalSet (const RationalSet &rcRationalSet) {
	mcRationals = rcRationalSet.mcRationals;
}

bool RationalSet::isIn (const Rational &rcRational) const {
	auto iter = find (mcRationals.begin (), mcRationals.end (), rcRational);

	return iter != mcRationals.end ();
}

int RationalSet::size () const {
	return mcRationals.size ();
}

RationalSet RationalSet::operator+ (const Rational &rcRational) {
	RationalSet cRationalSetTemp (*this);

	if (!isIn (rcRational)) {
		cRationalSetTemp.mcRationals.push_back (rcRational);
	}
	return cRationalSetTemp;
}

ostream &operator<< (ostream &rcOut, const RationalSet &rcRSet) {
	rcOut << '{';

	for (const auto &iter : rcRSet.mcRationals) {
		rcOut << iter << ' ';
	}

	rcOut << '}';
	return rcOut;
}