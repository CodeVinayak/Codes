#include <iostream>
using namespace std;

class base1
{
public:
    void greet()
    {
        cout << "how are you?" << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "kaise ho?" << endl;
    }
};
class derived : public base1, base2
{
    int a;

public:
    void greet()
    {
        base2::greet();
    }
};
class b
{
public:
    void say()
    {
        cout << "hello world" << endl;
    }
};
class d : public b
{
    int a;
    // d new say method will override base class's say() method
public:
    void say()
    {
        cout << "Hello bro" << endl;
    }
};
int main()
{
    // ambiguity1
    // base1 base1object;
    // base2 base2object;
    // base1object.greet();
    // derived d;
    // d.greet();
    // ambiguity1

    // ambiguity2
    b B;
    B.say();

    d D;
    D.say();

    return 0;
}