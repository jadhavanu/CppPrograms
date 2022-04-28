//29)C++ Program to Make a Simple Calculator to Add, Subtract, Multiply or Divide Using switch...case

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n1,n2,res,choice;
    cout<<"\n1. Add\n2. Subtract\n3. Multiplication\n4. Division : ";
    cout<<"\nEnter your choice";
    cin>>choice;
    cout<<"\nEnter the 1st number :";
    cin>>n1;
    cout<<"\nEnter the 2nd number :";
    cin>>n2;

    switch(choice)
    {
        case 1: res=n1+n2;
                cout<<"\nAddition of "<<n1<<" and "<<n2<<" is :"<<res;
                break;
        case 2: res=n1-n2;
                cout<<"\nSubtraction of "<<n1<<" and "<<n2<<" is :"<<res;
                break;
        case 3:res=n1*n2;
                cout<<"\nMultiplication of "<<n1<<" and "<<n2<<" is :"<<res;
                break;
        case 4:res=n1+n2;
                cout<<"\nAddition of "<<n1<<" and "<<n2<<" is :"<<res;
                break;
        Default : cout<<"\nInvalid option";
                break;
    }
    return 0;

}
