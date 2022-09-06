#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    // Interchange value of 2 variable using 3rd variable
    int a, b, c;
    cout << "Enter the value of A " << endl;
    cin >> a;
    cout << "Enter the value of B " << endl;
    cin >> b;
    cout << "The value of A is " << a << endl;
    cout << "The value of B is " << b << endl;
    cout << "Now Swapping the value of A and B Using 3rd variable" << endl;
    c = a;
    a = b;
    b = c;
    cout << "The value of A after swapping is " << a << endl;
    cout << "The value of B after swapping is " << b << endl;

    return 0;
}