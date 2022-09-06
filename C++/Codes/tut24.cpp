#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "\n enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of employee is " << id << " and the employee number is " << count << endl;
    }
    static void getcount(void)
    {
        cout << "the value of count is " << count << endl;
    } // static function can only access static data // this is static function
};
// count is the static data member of class employee
int employee::count; // this is static variable
                     // default value is zero if you want to change count you can do it here as int employee count=1000;

int main()
{
    employee harry, rohan, rohit;

    // harry.id = 1;
    // harry.count =1; // cannot do this as id and count are private
    harry.setdata();
    harry.getdata();
    employee::getcount();
    rohan.setdata();
    rohan.getdata();
    employee::getcount();
    rohit.setdata();
    rohit.getdata();
    employee::getcount();
    return 0;
}