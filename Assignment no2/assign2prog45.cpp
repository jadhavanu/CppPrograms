//45)C++ Program to Multiply Two Matrix Using Multi-dimensional Arrays

#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

    cout << "\nEnter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "\nEnter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    // If column of first matrix in not equal to row of second matrix,
    // ask the user to enter the size of matrix again.
    while (c1!=r2)
    {
        cout << "\nError! column of first matrix not equal to row of second.";

        cout << "\nEnter rows and columns for first matrix: ";
        cin >> r1 >> c1;

        cout << "\nEnter rows and columns for second matrix: ";
        cin >> r2 >> c2;
    }

    cout <<"\nEnter elements of matrix 1:";
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cout << "\nEnter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

    cout <<"\nEnter elements of matrix 2:";
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << "\nEnter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }

    // Initializing elements of matrix mult to 0.
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            mult[i][j]=0;
        }

    // Multiplying matrix a and b and storing in array mult.
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }

    // Displaying the multiplication of two matrix.
    cout <<"\nOutput Matrix: ";
    for(i = 0; i < r1; ++i)
    for(j = 0; j < c2; ++j)
    {
        cout << " " << mult[i][j];
        if(j == c2-1)
            cout << endl;
    }

    return 0;
}
