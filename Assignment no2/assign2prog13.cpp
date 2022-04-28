//13)C++ Program to Display Fibonacci Series

#include <iostream>
using namespace std;

int main(){
    int n1,n2,n3,fab;
    cout<<"\n For Fibonacci series we want two roots ";
    cout<<"\nInput the 1st root number : ";
    cin>>n1;
    cout<<"\nInput the 2nd root number : ";
    cin>>n2;
    cout<<"\nInput the number of terms in fibonacci series : ";
    cin>>n3;
    cout<<"\nFibonacci series with roots "<<n1<< " and "<<n2<<" is : ";
    cout<<n1<<"  "<<n2<<"  ";

    for(int i=0;i<n3;i++)
    {
        fab=n1+n2;
        n1=n2;
        n2=fab;
        cout<<fab<<"  ";
    }
    return 0;
}
