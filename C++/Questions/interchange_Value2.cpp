#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    // Interchange value of 2 without using 3rd variable
    int a, b;
    cout << "Enter the value of A " << endl;
    cin >> a;
    cout << "Enter the value of B " << endl;
    cin >> b;
    cout << "The value of A is " << a << endl;
    cout << "The value of B is " << b << endl;
    cout << "Now Swapping the value of A and B without Using 3rd variable" << endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout << "The value of A after swapping is " << a << endl;
    cout << "The value of B after swapping is " << b << endl;

    return 0;
}