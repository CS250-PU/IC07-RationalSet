#ifndef RATIONALSET_H
#define RATIONALSET_H

#include <iostream>
#include <vector>
#include "Rational.h"

using namespace std;

class RationalSet {
public:
	RationalSet ();
	RationalSet (const RationalSet &rcRationalSet);

	bool isIn (const Rational &rcRational) const;
	int size () const;
	RationalSet operator+ (const Rational &rcRational);
	friend ostream &operator<< (ostream &rcOut, const RationalSet &rcRSet);

private:
	vector<Rational> mcRationals;
};

#endif