#include <iostream>
using namespace std;
class abc
{
    int a, b;
public:
    // abc(){};          // Default constructor
    abc(int x, int y) // Parameterised constructor
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
    void operator-(); // Operator overloading
};
void abc::operator-()
{
    a = -a;
    b = -b;
}

int main()
{
    abc obj(10, 20);
    obj.display();
    -obj;
    obj.display();
    return 0;
}