/*6. Write a program in C++ to check whether the primitive values crossing the limits or not.
Check whether the primitive values crossing the limits or not :
--------------------------------------------------------------------
The Gender is : F
Is she married? : 1
Number of sons she has : 2
Year of her appointment : 2009
Salary for a year : 1500000
Height is : 79.48
GPA is 4.69
Salary drawn upto : 12047235
Balance till : 995324987
*/

#include <iostream>
using namespace std;

int main() {
    char gender='F';
    bool married= true;
    unsigned short noofson=2;
    short yearofapp=2009;
    int salary=1500000;
    float height=79.48;
    float gpa=4.69;
    int drawnsal= 12047235;
    long balance=995324987;

    cout<<"Check whether the primitive values crossing the limits or not :\n";
    cout<<"-------------------------------------------------------------------------\n";

    cout<<"The Gender is : "<<gender<<endl;
    cout<<"Is she Married? : "<<married<<endl;
    cout<<"Number of sons she has : "<<noofson<<endl;
    cout<<"Year of her appoinment : "<<yearofapp<<endl;
    cout<<"Salary for a year : "<<salary<<endl;
    cout<<"Height is : "<<height<<endl;;
    cout<<"GPA is : "<<gpa<<endl;
    cout<<"Salary drawn upto : "<<drawnsal<<endl;
    cout<<"Balance till : "<<balance<<endl;

    return 0;

}
