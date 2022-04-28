//44)C++ Program to Add Two Matrix Using Multi-dimensional Arrays

#include <iostream>
using namespace std;

int main()
{
    int r, c, a[15][15], b[15][15], sum[15][15], i, j;

    cout << "\nEnter number of rows (between 1 and 15): ";
    cin >> r;

    cout << "\nEnter number of columns (between 1 and 15): ";
    cin >> c;

    cout <<"\nEnter elements of 1st matrix: ";

    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "\nEnter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    cout <<"\nEnter elements of 2nd matrix: ";
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "\nEnter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }

      for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    cout << "\nSum of two matrix is: ";
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }

    return 0;
}
