#include <iostream>
using namespace std;
class parent// declaring parent class
{
protected:
    int a;
public:
    parent(int x);
    void x();
};
class child : public parent// declaring child class
{
private:
    int b;

public:
    child(int y);
    void y();
};
parent::parent(int x)// defining constructors and methods of parent class
{
    parent::a = x;
    cout << "parent \n";
}
void parent::x()
{
    cout << parent::a << "\n";
}
child::child(int y) : parent(y)// defining constructors and methods of child class
{
    child::b = y;
    cout << "child \n";
}
void child::y()
{
    cout << child::b;
}
int main()
{
    child c1(10); // creating a child object
    // displaying values of int a and int b
    c1.x();
    c1.y();
    return 0;
}
