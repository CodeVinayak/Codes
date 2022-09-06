#include <iostream>
using namespace std;
// Multiple inheritance
class A
{
public:
    int i;
    void geti()
    {
        cout << "Enter the number: " << endl;
        cin >> i;
    }
};
class B
{
public:
    int j;
    void evaluate()
    {
        if (j % 2 == 0)
        {
            cout << "Entered number is even." << endl;
        }
        else
        {
            cout << "Entered number is odd." << endl;
        }
    }
};
class C : public A, public B
{
public:
    void display()
    {
        cout << "Multiple inheritance successfully executed." << endl;
    }
};
int main()
{
    C obj;
    obj.geti();
    obj.j = obj.i;
    obj.evaluate();
    obj.display();
    return 0;
}