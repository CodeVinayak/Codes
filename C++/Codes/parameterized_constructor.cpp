// C++ program to demonstrate the use of Parameterized Constructor

#include <iostream>
using namespace std;
// declare a class
class Room
{
private:
    double length;
    double height;

public:
    // parameterized constructor to initialize variables
    Room(double l, double h)
    {
        length = l;
        height = h;
    }

    double calculateArea()
    {
        return length * height;
    }
};

int main()
{
    // create object and initialize data members
    Room Room1(8.5, 12.5);
    Room Room2(10, 15);

    cout << "Area of Room 1: " << Room1.calculateArea() << endl;
    cout << "Area of Room 2: " << Room2.calculateArea() << endl;

    return 0;
}