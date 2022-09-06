#include <iostream>
using namespace std;
class X
{
    int num;
    float percentage;

public:
    X(int p, float q)
    {
        num = p;

        percentage = q;
    }
    void display()
    {
        cout << "\nRoll number :- " << num;

        cout << "\nPercentage :- " << percentage;
    }
};
int main()
{
    int a;
    float b;
    cout << "\nEnter the Roll Number ";
    cin >> a;
    cout << "\nEnter the Percentage ";
    cin >> b;
    X x(a, b); // dynamic initialization
    x.display();
    return 0;
}