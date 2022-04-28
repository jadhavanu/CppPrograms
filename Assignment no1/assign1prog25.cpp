/*25. Write a program in C++ to convert temperature in Kelvin to Celsius.
Sample Output:
Convert temperature in Kelvin to Celsius :
------------------------------------------------
Input the temperature in Kelvin : 300
The temperature in Kelvin : 300
The temperature in Celsius : 26.85
*/
#include<iostream>
using namespace std;

int main(){
    float kel, cel;
    cout<<"\nConvert temperature in Kelvin to Celsius : ";
    cout<<"\n-------------------------------------------";
    cout<<"\nInput the temperature in Kelvin : ";
    cin>>kel;
    cout<<"\n The temperature in Kelvin : "<<kel;
    cel=kel-273.15;
    cout<<"\n The temperature in Celsius : "<<cel;
    return 0;
}
