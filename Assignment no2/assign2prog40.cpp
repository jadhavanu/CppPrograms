//40)C++ Program to Calculate Power Using Recursion

#include <iostream>
#include <math.h>
using namespace std;

int power(int n, int p){
    if(p==0)
        return 1;
    else
        return(n*power(n,p-1));

}
int main(){

    int n,p,res,i;
    cout<<"\nInput the number : ";
    cin>>n;
    cout<<"\nInput the power : ";
    cin>>p;
    res=power(n,p);
    cout<<"\n"<<n<<" ^ "<<p<<" is "<<res;
    return 0;

}
