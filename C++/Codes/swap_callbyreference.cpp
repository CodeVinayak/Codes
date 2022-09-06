#include <iostream>
#include <conio.h>
using namespace std;
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main()
{
    int a = 24, b = 66;
    cout << "Before Swap "<< endl;
    cout << "The value of a is " << a << " and b is " << b << endl;
    swap(&a, &b);
    cout << "After Swap "<< endl;
    cout << "The value of a is " << a << " and b is " << b << endl;
    return 0;
}