// array of pointer to object
#include <iostream>
using namespace std;
class person
{
    char name[50];
public:
    void get()
    {
        cout << "Enter Name : ";
        cin >> name;
    }
    void show()
    {
        cout << "Name is " << name << endl;
    }
};
int main()
{
    person *ptr[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        ptr[i] = new person;
        ptr[i]->get();
    }
    for (i = 0; i < 5; i++)
    {
        ptr[i]->show();
    }
    return 0;
}