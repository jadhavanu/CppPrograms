/*60. Write a program in C++ to add two binary numbers.
Sample Output:
Addition of two binary numbers:
-----------------------------------
Input the 1st binary number: 1010
Input the 2nd binary number: 0011
The sum of two binary numbers is: 1101
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	long bn1,bn2;
	int i=0, r=0;
	int sum[20];
    cout << "\n\n Addition of two binary numbers:\n";
	cout << "-----------------------------------\n";
	cout << " Input the 1st binary number: ";
	cin>> bn1;
	cout << " Input the 2nd binary number: ";
	cin>> bn2;
  while (bn1 != 0 || bn2 != 0)
  {
   sum[i++] = (int)((bn1 % 10 + bn2 % 10 + r) % 2);
   r = (int)((bn1 % 10 + bn2 % 10 + r) / 2);
   bn1 = bn1 / 10;
   bn2 = bn2 / 10;
  }
  if (r != 0) {
   sum[i++] = r;
  }
  --i;
  cout<<" The sum of two binary numbers is: ";
 111111111111111111111111111    1    while (i >= 0) {
   cout<<(sum[i--]);
  }
   cout<<("\n");
 }


