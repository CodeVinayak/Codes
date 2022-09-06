// C++ program to demonstrate the use of default constructor

#include <iostream>
using namespace std;

// declare a class
class Cube
{
private:
    int Side;

public:
    // default constructor to initialize variable
    Cube()
    {
        Side = 4;
        cout << "Creating a Cube." << endl;
        cout << "Side = " << Side << endl;
    }
};

int main()
{
    Cube c;
    return 0;
}