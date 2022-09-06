#include <iostream>
using namespace std;
int main()
{
    cout << "Program to show array of pointers "<<endl;
    int array[5] = {10, 20, 30, 40, 50};
    int *ptr[5];
    cout << "Value of array "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << endl;
    }
    ptr[0] = &array[0];
    ptr[1] = &array[1];
    ptr[2] = &array[2];
    ptr[3] = &array[3];
    ptr[4] = &array[4];
    cout << "Value of array of pointers "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr[i] << endl;
    }
}