#include <iostream>
using namespace std;

//ek class me multiple construcure ho skta hai

class complex
{
    int a, b;

public:
    complex(){
        a=0;
        b=0;
    }

    //Jo parameter  match hoga wo hi construcutre pass hohga 
    complex(int x, int y)//---> construcutre
    {
        a = x;
        b = y;
    }
    complex(int x){
        a=x;
        b=0;
    }
    void printnumber()
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    complex c1(4,6);
    c1.printnumber();
    complex c2(5);
    c2.printnumber();
    complex c3;
    c3.printnumber();
    return 0;
}