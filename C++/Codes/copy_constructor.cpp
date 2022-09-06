// C++ program to demonstrate the use of Copy Constructor

#include <iostream>
using namespace std;

// declare a class
class Room
{
private:
    double length;
    double height;

public:
    // initialize variables with parameterized constructor
    Room(double l, double h)
    {
        length = l;
        height = h;
    }
    // copy constructor with a Room object as parameter
    // copies data of the obj parameter
    Room(Room &obj)
    {
        length = obj.length;
        height = obj.height;
    }
    double calculateArea()
    {
        return length * height;
    }
};
int main()
{
    // create an object of Room class
    Room Room1(10.2, 12.5);

    // copy contents of Room1 to Room2
    Room Room2 = Room1;

    // print areas of Room1 and Room2
    cout << "Area of Room 1: " << Room1.calculateArea() << endl;
    cout << "Area of Room 2: " << Room2.calculateArea() << endl;

    return 0;
}