#include <iostream>
using namespace std;

class cube
{
public:
    float side;
    // parameterized constructor to initialize variables
    cube(float x)
    {
        side = x;
    }
};

int main()
{
    // create object and initialize data members
    cube c1(10);
    cube c2(25.2);
    cube c3(40);
    cube c4(55.15);
    cout << c1.side << endl;
    cout << c2.side << endl;
    cout << c3.side << endl;
    cout << c4.side << endl;

    return 0;
}