#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    float fahrenheit, celsius, input;
    cout << "Choose temperature type : " << endl;
    cout << "Press 1 for converting fahrenheit to celsius " << endl;
    cout << "Press 2 for converting celsius to fahrenheit " << endl;
    cin >> input;
    if (input == 1)
    {
        // fahrenheit to celsius
        cout << "Enter temperature in fahrenheit ";
        cin >> fahrenheit;
        celsius = (fahrenheit - 32) * 5 / 9;
        cout << "\nThe temperature in celsius is " << celsius;
    }
    else if (input == 2)
    {
        // fahrenheit to celsius
        cout << "Enter temperature in celsius ";
        cin >> celsius;
        fahrenheit = (celsius * 9 / 5) + 32;
        cout << "\nThe temperature in fahrenheit is " << fahrenheit;
    }
    else
    {
        cout << "Invalid input";
    }
    return 0;
}