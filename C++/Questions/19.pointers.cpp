#include <iostream>
using namespace std;
int main()
{
    int x = 20;
    int *ip; // pointer declartion
    ip = &x;
    cout << "Value of x is : ";
    cout << x << endl;
    cout << "Value of ip is : ";
    cout << ip << endl;
    cout << "Value of *ip is : ";
    cout << *ip << endl;
    return 0;
}