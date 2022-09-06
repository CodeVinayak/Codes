// C++ Program to overload * operator for complex class

#include <iostream>
using namespace std;
struct complex
{
    float real;
    float imag;
};
complex operator*(complex a, complex b);
int main()
{
    complex a, b, c;
    int ch;
    cout << "Enter the first complex no :: " << endl;
    cin >> a.real >> a.imag;
    cout << "Enter the second complex no :: " << endl;
    cin >> b.real >> b.imag;

    c = a * b;
    cout << "Multiplication of 2 no :: " << endl;
    cout << c.real << "i" << c.imag;
}
complex operator*(struct complex a, struct complex b)
{
    complex c;
    c.real = ((a.real * b.real) - (a.imag * b.imag));
    c.imag = ((a.real * b.imag) + (a.imag * b.real));
    return (c);
}