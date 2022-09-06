#include <iostream> 
using namespace std;

/*
case1:
class b: public a{
    //order of execution of constructor -> first a() then b()
};
case2:
class a:public b,public c{
    //order of execution of constructor -> first b() then c() and a()
};
case 3:
class a:public b,virtual public c{
    //order of execution of constructor -> first c() then b() and a()
};
*/

class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "Base1 class contructor called" << endl;
    }
    void printdatabase1(void)
    {
        cout << "the value of data is " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "Base2 class contructor called" << endl;
    }
    void printdatabase2(void)
    {
        cout << "the value of data is" << data2 << endl;
    }
};
class derived : public base2, public base1
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d):  base2(b),base1(a)
    {
        derived1 = c;
        derived2 = d;
        cout << "derived class contrustor called" << endl;
    }
    void printdataderived(void)
    {
        cout << "the value of derived1 is " << derived1 << endl;
        cout << "the value of derived2 is " << derived2 << endl;
    }
};
int main()
{
    derived harry(1, 2, 3, 4);
    harry.printdatabase1();
    harry.printdatabase2();
    harry.printdataderived();
    return 0;
}