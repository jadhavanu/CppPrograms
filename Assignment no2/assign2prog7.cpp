//C++ Program to Find Largest Number Among Three Numbers

#include <iostream>
using namespace std;

int main(){
    int n1,n2,n3;
    cout<<"\nInput the 1st number : ";
    cin>>n1;
    cout<<"\nInput the 2nd number : ";
    cin>>n2;
    cout<<"\nInput the 3rd number : ";
    cin>>n3;


    if((n1>n2)&&(n1>n3))
        cout<<"\nThe number "<<n1<<" is greater then "<<n2<<" and "<<n3;
    else if((n2>n1)&&(n2>n3))
        cout<<"\nThe number "<<n2<<" is greater then "<<n1<<" and "<<n3;
    else
        cout<<"\nThe number "<<n3<<" is greater then "<<n1<<" and "<<n2;
    return 0;
}
