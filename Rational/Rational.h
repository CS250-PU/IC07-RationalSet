//***************************************************************************
// File name:  Rational.h
// Author:     CS, Pacific University
// Date:       
// Class:      CS250
// Assignment: Rational 
// Purpose:    Interface for class Rational. A Rational number is of the form
//             numerator / denominator.
//***************************************************************************
#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

using namespace std;

class Rational {
public:
	Rational (int numerator = 0, int denominator = 1);
	bool operator== (const Rational &rcRational) const;
	Rational operator* (const Rational &rcRational) const;

	friend ostream &operator<< (ostream &rcOutStream,
		const Rational &rcRational);
	friend istream &operator>> (istream &rcInStream,
		Rational &rcRational);

private:
	int mNumerator, mDenominator;
};

#endif