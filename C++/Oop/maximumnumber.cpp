// Accessing data member within the class

#include <iostream>
#include <stdio.h>
using namespace std;
class number
{
    int num1, num2; // Private by default
public:
    void read()
    {
        cout << "Enter the value of Number 1 ";
        cin >> num1;
        cout << "Enter the value of Number 2 ";
        cin >> num2;
    }
    int max()
    {
        if (num1>num2)
        cout<<"Maximum number is "<<num1;
        else 
        cout<<"Maximum number is "<<num2;
    }
    // void showmax()
    // {
    //     cout<<"Maximum number is "<<max();
    // }
};

int main()
{
    number n1;
    n1.read();
    n1.max();
    // n1.showmax();
}