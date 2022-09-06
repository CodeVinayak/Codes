// Definition: this pointer is used to distinguish data members of the class and member function when having the same name.
//‘this’ pointer is a constant pointer that holds the memory address of the current object.
#include <iostream>
using namespace std;
class Number
{
private:
    int num;
public:
    void set(int num)
    {
        this->num = num;
    }
    void display()
    {
        cout <<"Number : " <<num << endl;
    }
};
int main()
{
    Number obj;
    obj.set(100);
    obj.display();
    return 0;
}