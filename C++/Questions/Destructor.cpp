#include <iostream>
using namespace std;
class Demo
{
public:  
    Demo()// Constructor
    {
        cout << "Constructor is called ..." << endl;
    }
    ~Demo()// Destructor
    {
        cout << "Destructor is called ..." << endl;
    }
    void display() // Member function
    {
        cout << "Hello World!" << endl;
    }
};
int main()
{
    // Object created
    Demo obj;
    // Member function called
    obj.display();
    return 0;
}