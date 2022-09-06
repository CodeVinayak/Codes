#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int); // constructor declaration
    void printnumber()
    {
        cout << " your number is " << a << "+" << b << "i" << endl;
    }
};
 complex ::complex(int x, int y)
{ //-------->This is a parameterized constructor as it takes 2 pparameters
    a = x;
    b = y;
}
int main()
{
    //implicit call
    complex a(4, 6);

    //explicit call
    complex b=complex(5,7);

    a.printnumber();
    b.printnumber();
    return 0;
}