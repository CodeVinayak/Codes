#include <iostream>
using namespace std;

//Base class - Jiske new class derive kiya ja rha hai
class employee
{

public:
    int id;
    float salary;
    employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }
    employee() {}
};
// Derived class syntax
/*
class {{derived-class-name}} : {{visibility mode}}{{base-class-name}}
{
    class members/methods/etc....
}  
Notes:
    1.Default visibility mode is private
    2.Public visibility mode : public members of the base class becomes public members of the derived class
    3.Private visibility mode : public members of the base class becomes private members of the derived class
    4.Private members are never inherited

*/
//creating a programmer class derived from employee base class

class programmer : employee
{
public:
    int languagecode;
    programmer(int inpid)
    {
        id = inpid;
        languagecode = 9;
    }
    void getdata()
    {
        cout << id << endl;
    }
};
int main()
{
    employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    programmer skillf(10);
    cout << skillf.languagecode << endl;
    skillf.getdata();
    return 0;
}