#include <iostream>
using namespace std;
// Single Inheritance
class A
{
public:
    int a, b;
    void getdata()
    {
        cout << "Enter two numbers: " << endl;
        cin >> a >> b;
    }
};
class B : public A
{
    int c;

public:
    void showdata()
    {
        c = a * b;
        cout << "The entered numbers are: " << a << " and " << b << endl;
        cout << "The product is: " << c << endl;
    }
};
int main()
{
    B obj;
    obj.getdata();
    obj.showdata();
    return 0;
}