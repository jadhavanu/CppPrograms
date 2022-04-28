//33)C++ program to Find Sum of Natural Numbers using Recursion

#include <iostream>
#include <math.h>
using namespace std;

int sum(int n1,int n2){

    if(n1<=n2)
        return(n1+sum(n1+1,n2));
}

int main() {

    int n1,n2;
    cout<<"\nSum of Natural Numbers : ";
    cout<<"\nInput the 1st number : ";
    cin>>n1;
    cout<<"\nInput the last number to add : ";
    cin>>n2;
    cout<<"\nSum of Natural Nmbers From "<<n1<<" to "<<n2<<" is :";
    cout<<sum(n1,n2);
    return 0;

}
