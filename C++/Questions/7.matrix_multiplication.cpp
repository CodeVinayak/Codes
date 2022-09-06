// Not understand
#include <iostream>
using namespace std;
int main()
{
    int arr1[3][3], arr2[3][3], arr3[3][3];
    cout << "Enter the Elements of Matrix 1 : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> arr1[i][j];
    }
    cout << "Enter the Elements of Matrix 2 : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> arr2[i][j];
    }
    cout << "Matrix Multiplication is : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr3[i][j] = 0;
            for (int k = 0; k < 3; k++)
                arr3[i][j] = arr3[i][j] + (arr1[i][k] * arr2[k][j]);
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}