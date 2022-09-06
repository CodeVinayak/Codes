// C++ program to find sum of two matrix
#include <iostream>
using namespace std;
int main()
{
    int rows, cols, i, j;
    int one[50][50], two[50][50], sum[50][50];
    cout << "Enter Rows and Columns of Matrix\n";
    cin >> rows >> cols;
    cout << "Enter first Matrix data " << rows << " X " << cols << endl;
    //  Input first matrix
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            cin >> one[i][j];
        }
    }
    //  Input second matrix
    cout << "\nEnter second Matrix data " << rows << " X " << cols << endl;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            cin >> two[i][j];
        }
    }
    /* adding corresponding elements of both matrices
       sum[i][j] = one[i][j] + two[i][j] */
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            sum[i][j] = one[i][j] + two[i][j];
        }
    }
    cout << "Sum Matrix\n";
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}