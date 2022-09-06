#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    }
    number(int num)
    {
        a = num;
    }
    //when no copy constructor is found,compiler suplie its own copy constructor
    number(number &obj)
    {
        cout << "copy constuctor called!!" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The  number for this object is " << a << endl;
    }
};
int main()
{
    number x, y, z(45),z2;
    x.display();
    y.display();
    z.display();

    number z1(z);
    z1.display();
    z1=z;//copy constructor not called
    z1.display();
    z1=z;//copy constructor not called

    number z3 =z;//copy constructor invoked//called
    z3.display();

    //z1 should exactly resamble z or x or y
    return 0;
}