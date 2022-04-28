/*3. Write a program in C++ to find Size of fundamental data types.
Sample Output:
Find Size of fundamental data types :
------------------------------------------
The sizeof(char) is : 1 bytes
The sizeof(short) is : 2 bytes
The sizeof(int) is : 4 bytes
The sizeof(long) is : 8 bytes
The sizeof(long long) is : 8 bytes
The sizeof(float) is : 4 bytes
The sizeof(double) is : 8 bytes
The sizeof(long double) is : 16 bytes
The sizeof(bool) is : 1 bytes
*/
#include<iostream>
using namespace std;

int main(){
    cout<<"Find size of fundamental data types : ";
    cout<<"\n -----------------------------------------------";
    cout<<"\n The sizeof (char) is : "<<sizeof(char)<<" bytes";
    cout<<"\n The sizeof (short) is : "<<sizeof(short)<<" bytes";
    cout<<"\n The sizeof (int) is : "<<sizeof(int)<<" bytes";
    cout<<"\n The sizeof (long) is : "<<sizeof(long)<<" bytes";
    cout<<"\n The sizeof (long long) is : "<<sizeof(long long)<<" bytes";
    cout<<"\n The sizeof (float) is : "<<sizeof(float)<<" bytes";
    cout<<"\n The sizeof (double) is : "<<sizeof(double)<<" bytes";
    cout<<"\n The sizeof (long double) is : "<<sizeof(long double)<<" bytes";
    cout<<"\n The sizeof (bool) is : "<<sizeof(bool)<<" bytes";

return 0;
}

