/*49. Write a program in C++ to print the code (ASCII code / Unicode code etc.) of a given character.
Sample Output:
Print code (ASCII code / Unicode code etc.) of a given character:
-----------------------------------------------------------------------
Input a character: a
The ASCII value of a is: 97
The character for the ASCII value 97 is: a
*/

#include <iostream>
using namespace std;

int main() {
    char a;
    cout<<"\nPrint code (ASCII code / Unicode code etc.) of a given character :";
    cout<<"\n------------------------------------------------------------------------";
    cout<<"\nInput a character : ";
    cin>>a;
    cout<<"\nThe ASCII value of "<<a<<" is : "<<(int)a;
    cout<<"\nThe character for the ASCII value "<<a<<" is : "<<(char)((int)a);
    return 0;
}
