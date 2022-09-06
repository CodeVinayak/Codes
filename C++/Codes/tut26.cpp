#include <iostream>
using namespace std;

/*1+4i
      5+8i
      -----
      6+12i*/
class complex
{
    int a, b;
public:
    
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    //below line means that non member - sumcomplex function is allowd to do anything with my private parts(members)
    friend complex sumcomplex(complex o1,complex o2);
    /*properties of friend functions
    1.not in the scope of class 
    2.since it is not in the scope of the class , it cannot be called from the object of the class.c1.sumcomple()==Invalid
    3.can be invoked without the help of any object
    4.usually contains the object as arguments
    5.can be declared inside public or private section of the class
    6.it cannot access the members directly by their names and need object_name.member_name to access any member.
    */
    void printnumber()
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.setnumber(1, 4);
    c1.printnumber();

    c2.setnumber(5, 8);
    c2.printnumber();

    sum = sumcomplex(c1, c2);
    sum.printnumber();
    return 0;
}