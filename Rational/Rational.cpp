//***************************************************************************
// File name:  rational.cpp
// Author:     CS, Pacific University
// Date:       
// Class:      CS250
// Assignment: Rational 
// Purpose:    Implements constructors & functions of class Rational. There is
//             no real error checking in this implementation.
//***************************************************************************

#include <iostream>
#include "Rational.h"

using namespace std;

//***************************************************************************
// Constructor: Rational
//
// Description: Initializes data members to default values
//
// Parameters:  numerator   – the numerator of the rational number
//              denominator – the denominator of the rational number
//
// Returned:    None
//***************************************************************************

Rational::Rational (int numerator, int denominator) {
	mNumerator = numerator;
	mDenominator = denominator;
}

//*********************************************************************
// TODO#1 operator<<		outputs a rational number in the form x/y

//*********************************************************************
ostream &operator<< (ostream &rcOutStream, const Rational &rcRational) {
	rcOutStream << rcRational.mNumerator << '/'
		<< rcRational.mDenominator;

	return rcOutStream;
}

//*********************************************************************
// TODO#2 operator>>		inputs a rational number in the form x/y
//*********************************************************************
istream &operator>> (istream &rcInStream, Rational &rcRational) {
	char divide;

	rcInStream >> rcRational.mNumerator >> divide
		>> rcRational.mDenominator;

	return rcInStream;
}
//*********************************************************************
// TODO#3 operator*			binary operation that multiplies two rational
//                      numbers
//*********************************************************************
Rational Rational::operator* (const Rational &rcRational) const {
	return Rational (mNumerator * rcRational.mNumerator,
		mDenominator * rcRational.mDenominator);
}

//*********************************************************************
// TODO#4 operator==		compares two rational numbers for equivalency
//*********************************************************************

bool Rational::operator== (const Rational &rcRational) const {
	return mNumerator == rcRational.mNumerator &&
		mDenominator == rcRational.mDenominator;
}