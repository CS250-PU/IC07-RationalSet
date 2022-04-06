#include <iostream>
#include "Rational.h"

using namespace std;

int main () {
  Rational cR1 (2, 3), cR2 (6, 8), cR3;

  cout << cR1 << ' ' << cR2 << ' ' << cR3 << endl;

  cout << "Enter a Rational number: ";
  cin >> cR3;
  cout << "Rational Entered: " << cR3 << endl;

  cR3 = cR1 * cR2;
  cout << cR3 << endl;

  if (cR1 * cR2 == cR3) {
    cout << "cR1 * cR2 equals cR3" << endl;
  }
  else {
    cout << "cR1 * cR2 not equals cR3" << endl;
  }

  return EXIT_SUCCESS;
}