#include <iostream>
using namespace std;

class bankdeposit
{
    int principal;
    int years;
    float interesetrate;
    float returnvalue;

public:
    bankdeposit() {}
    bankdeposit(int p, int y, float r); // r can be value like 0.04 {ir means interest rate}
    bankdeposit(int p, int y, int r);   // r can also be value like 14
    void show();
};

bankdeposit ::bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interesetrate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interesetrate);
    }
}
bankdeposit ::bankdeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interesetrate = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interesetrate);
    }
}
void bankdeposit ::show()
{
    cout << endl
         << "Principal amount was " << principal
         << ". Return value after " << years
         << " years is " << returnvalue << endl;
}
int main()
{
    bankdeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p y and r" << endl;
    cin >> p >> y >> r;
    bd1 = bankdeposit(p, y, r);
    bd1.show();
    cout << "Enter the value of p y and R" << endl;
    cin >> p >> y >> R;
    bd2 = bankdeposit(p, y, R);
    bd2.show();
    return 0;
}
