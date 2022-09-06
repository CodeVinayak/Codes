// In Function Overloading “Function” name should be the same and the arguments should be different.
#include <iostream>
using namespace std;
void print(int i)
{
    cout << "Printing int " << i << endl;
}
void print(double f)
{
    cout << "Printing float " << f << endl;
}
void print(char const *c)
{
    cout << "Printing char " << c << endl;
}
int main()
{
    print(20);
    print(20.5);
    print("twenty");
    return 0;
}
