#include <iostream>
#include <fstream>
#include "RationalSet.h"
#include "Rational.h"

using namespace std;

int main () {
  RationalSet cRationalSet, cR2, cR3;
  Rational cRational (1, 2);
  ifstream inputRational;
  ifstream inputRationalSet;

  cout << cRationalSet;
  cout << cRationalSet + cRational;
  cout << cRationalSet;
  cRationalSet = cRationalSet + cRational;
  cout << cRationalSet;
  cRationalSet = cRationalSet + cRational;
  cout << cRationalSet;

  //inputRational.open ("RationalNumbers.txt");


  //while (inputRational >> cRational) {
  //  cout << cRational << endl;
  //  // cRationalSet1 = cRationalSet1 + cRational;
  //}

  //inputRational.close ();

  //inputRationalSet.open ("RationalSets.txt");

  //while (inputRationalSet >> cRationalSet) {
  //  cout << cRationalSet << endl;
  //}

  //inputRationalSet.close ();

  return EXIT_SUCCESS;
}