//8)C++ Program to Find All Roots of a Quadratic Equation

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float a, b, c, determinant, root1, root2, real, imag;
  cout << "Enter coefficients a, b and c of quadratic equation ax^2 + bx + c = 0 \n";
  cin >> a >> b >> c;

  /* Calculate determinant */
  determinant = b*b - 4*a*c;

  if(determinant >= 0) {
      root1= (-b + sqrt(determinant))/(2 * a);
      root2= (-b - sqrt(determinant))/(2 * a);
      cout << "Square roots are " << root1 << "  " << root2;
  } else {
    real= -b/(2*a);
    imag = sqrt(-determinant)/(2 * a);
    cout << "Square roots are " << real << "+" << imag << "i , " << real << "-" << imag << "i";
  }

  return 0;
}
