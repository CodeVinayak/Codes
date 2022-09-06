#include <iostream>
using namespace std;


//multilevel inheritance
class student
{
protected:
    int roll_number;

public:
    void set_rollnumber(int);
    void get_rollnumber(void);
};
void student ::set_rollnumber(int r)
{
    roll_number = r;
}
void student ::get_rollnumber()
{
    cout << "The roll number is " << roll_number << endl;
}
class exam : public student
{
protected:
    float maths;
    float account;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void exam ::set_marks(float m1, float m2)
{
    maths = m1;
    account = m2;
}
void exam ::get_marks()
{
    cout << "the marks obtained is maths are: " << maths << endl;
    cout << "the marks obtained in account are " << account << endl;
}
class result : public exam
{
    float percentage;

public:
    void display_result()
    {
        get_rollnumber();
        get_marks();
        cout << "your result is " << (maths + account) / 2 <<"%"<< endl;
    }
};
int main()
/*
Notes:
If we are inheriting B from A and C from B: [A----->B---->C]
1. A is the base class for B and B is the base class for c
2. A--->B---->C is called Inheritance Path
*/
{
    result harry;
    harry.set_rollnumber(420);
    harry.set_marks(95.0,92.0);
    harry.display_result();
    return 0;
}
