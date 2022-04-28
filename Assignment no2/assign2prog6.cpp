/*C++ Program to Check Whether a character is Vowel or Consonant.*/

#include <iostream>
using namespace std;

int main(){
    char c,i=0;
    cout<<"\nInput the character to check : ";
    cin>>c;

    if((c=='a')||(c=='A')||(c=='e')||(c=='E')||(c=='i')||(c=='I')||(c=='o')||(c=='O')||(c=='u')||(c=='U'))
    {
        i++;
    }

    if(i>0)
        cout<<"\nThe character "<<c<<" is a Vowel";
    else
        cout<<"\nThe character "<<c<<" is a Consonant";
    return 0;
}
