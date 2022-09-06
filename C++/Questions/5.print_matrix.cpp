#include <iostream>
using namespace std;
int main()
{
    int a[3][3];
    cout << "Enter Elements of Array : " << endl;
    // Loop to Enter Elements
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    // Loop to print Matrix
    cout << "3x3 Matrix :" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
    }
    return 0;
}