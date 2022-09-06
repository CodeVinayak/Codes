#include <iostream>
using namespace std;
// Base class
class A
{
public:
    void P1()
    {
        cout << "Parent class A Called"<<endl;
    }
};

// Another base class
class B
{
public:
    void P2()
    {
        cout << "Parent class B Called"<<endl;
    }
};

// Derived class
class C : public A, public B{};

int main()
{
    C obj;
    obj.P1();
    obj.P2();
    return 0;
}