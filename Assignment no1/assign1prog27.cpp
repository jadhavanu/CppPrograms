/*27. Write a program in C++ to convert temperature in Celsius to Kelvin.
Sample Output:
Convert temperature in Celsius to Kelvin :
---------------------------------------------------
Input the temperature in Celsius : 26.85
The temperature in Celsius : 26.85
The temperature in Kelvin : 300
*/


#include<iostream>
using namespace std;

int main(){
    float kel, cel;
    cout<<"\nConvert temperature in Celsius to Kelvin : ";
    cout<<"\n-------------------------------------------";
    cout<<"\nInput the temperature in Celsius : ";
    cin>>cel;
    cout<<"\n The temperature in Celsius : "<<cel;
    kel=cel+273.15;
    cout<<"\n The temperature in Kelvin : "<<kel;
    return 0;
}
