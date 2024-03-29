#include <iostream>
using namespace std;

//Syntax for inheriting in Multiple Inheritance
// class derived C : visibility-mode base1,visibility-mode base2
// {
//     class body of class "derivedc"
// };

class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class derived :public base1,public base2
{
    public:
    void show(){
        cout <<"the value of base 1 is "<<base1int<<endl;
        cout <<"the value of base 2 is "<<base2int<<endl;
        cout<<"the sum of these value is " <<base1int+base2int<<endl;
    }
};

/*
The inherited  derived  class will look something like this:
Data Members:
base1int ------>protected
base2int ------>protected
Member Funtion:
set_base1int()------>public
set_base2int()------>public
set_show()------>public
*/
int main()
{
    derived harry;
    harry.set_base1int(23);
    harry.set_base2int(7);
    harry.show();
    return 0;
}