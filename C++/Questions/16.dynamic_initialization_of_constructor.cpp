#include <iostream>
using namespace std;
class simple_interest
{
    float principle, time, rate, interest, total;

public:
    simple_interest(float a, float b, float c)
    {
        principle = a;
        time = b;
        rate = c;
    }
    void display()
    {
        interest = (principle * rate * time) / 100;
        cout << "principle amount = " << principle << endl;
        cout << "time in year = " << time << endl;
        cout << "rate of interest = " << rate << endl;
        cout << "interest amount = " << interest << endl;
        cout << "Total amount = " << (principle + interest) << endl;
    }
};
int main()
{
    float p, r, t;
    simple_interest s1(500, 1, 4); // dynamic initialization
    s1.display();
    return 0;
}