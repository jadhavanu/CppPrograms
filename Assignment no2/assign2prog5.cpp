/*C++ Program to Check Whether Number is Even or Odd*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"\nInput the number to check even or odd : ";
    cin>>n;

    if(n%2==0)
        cout<<"\nThe number "<<n<<" is EVEN number";
    else
        cout<<"\nThe number "<<n<<" is ODD number";
    return 0;
}

