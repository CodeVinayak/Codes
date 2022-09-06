#include <iostream>
using namespace std;
class data
{
    int num1;
    int num2;
    int num3;

public:
    data(int a, int b = 20, int c = 25)
    {
        num1 = a;
        num2 = b;
        num3 = c;
    }
    void printdata();
};
void data ::printdata()
{
    cout << "The value of num1 is " << num1 << endl;
    cout << "The value of num2 is " << num2 << endl;
    cout << "The value of num3 is " << num3 << endl;
}

int main()
{
    cout<<"The data for object 1 is "<< endl;
    data obj(5);
    obj.printdata();
    cout<<"The data for object 2 is "<< endl;
    data obj2(5,10);
    obj2.printdata();
    cout<<"The data for object 3 is "<< endl;
    data obj3(5,10,15);
    obj3.printdata();

    return 0;
}
