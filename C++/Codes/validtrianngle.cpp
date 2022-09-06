#include <iostream>
#include <conio.h>
using namespace std;
int valid_triangle(int a, int b, int c);
int main()
{
    // int valid_triangle();
    // return 0;
}

int valid_triangle(int a, int b, int c)
{
    cout << "Enter the value of a,b and c";
    cin >> a >> b >> c;
    if ( a <= 0 || b <= 0 ||  c <= 0)
    {
        cout << "Invalid triangle statement 1";
        return false;
    }
    if (((a + b) <= c) || ((b + c) <= a)|| (a+c)<=b)
    {
        cout << "Invalid traingle statement 2";
        return false;
    }
    else
    {
        cout<<"Valid triangle";
        return true;
    }
}