/*66. Write a C++ program to add all the numbers from 1 to a given number.
Add 1 to 4: 10
Add 1 to 100: 5050
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){

    int n,sum;
    cout<<"\nInput the number up to which you want to add : ";
    cin>>n;
    sum=0;
    for(int i=1;i<=n;i++)
        sum=sum+i;
    cout<<"\n Addition of "<<1<<" to "<<n<<" is : "<<sum;
    return 0;

}
