/*12. Write a program in C++ to add two numbers accept through keyboard.
Sample Output:
Original array:
[10, 20, 30]
After append values to the end of the array:
[10 20 30 40 50 60 70 80 90]
*/

#include <iostream>
using namespace std;

int main(){
    int n1=10, n2=20,sum;
    int num[15],i;

    num[0]=n1;
    num[1]=n2;
    cout<<"\nAfter appending array is:";
    cout<<"\n"<<n1<<" "<<n2<<" ";
    for(i=2;i<15;i++)
    {
        sum=n2+10;
        num[i]=sum;
        n1=n2;
        n2=sum;
        cout<<" "<<sum;
    }
    return 0;
}
