#include <iostream>
using namespace std;
//  Multilevel Inheritance
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
public:
    int c;
    void prntdata()
    {
        c = (a * b) ;
    }
};
class C : public B
{
public:
    void showdata()
    {
        cout << "The entered numbers are " << a << " and " << b << endl;
        cout << "Their product is  " << c << endl;
    }
};
int main()
{
    C obj;
    obj.getdata();
    obj.prntdata();
    obj.showdata();
    return 0;
}