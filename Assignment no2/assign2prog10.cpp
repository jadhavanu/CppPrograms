//10)C++ Program to Check Leap Year
#include <iostream>
using namespace std;

int main(){
    int year;
    cout<<"\nInput the year to check for leap year : ";
    cin>>year;

    if((year%4)==0)
        cout<<"\nThe year "<<year<<" is a Leap year";
    else
        cout<<"\nThe year "<<year<<" is a not a Leap year";
    return 0;
}
