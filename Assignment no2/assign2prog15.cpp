//15)C++ Program to Find LCM


#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n1, n2, lcm;

    cout << "\n Program for calculating LCM: ";
    cout<<"\nInput 1st number : ";
    cin >> n1 ;
    cout<<"\nInput 2nd number : ";
    cin>> n2;

    if(n1>n2)
        lcm=n1;
    else
        lcm=n2;

    cout<<"\nLCM of "<<n1<<" and "<<n2<<" is : ";
    do
    {
        if (lcm % n1 == 0 && lcm % n2 == 0)
        {
            cout<< lcm;
            break;
        }
        else
            ++lcm;
    } while (true);

    return 0;
}

