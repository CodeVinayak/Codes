// Pointer to Object
#include <iostream>
using namespace std;
class Date
{
private:
    short int dd, mm, yy;
public:
    Date() // constrctor:
    {
        dd = mm = yy = 0;
    }
    void getdata(int i, int j, int k)
    {
        dd = i;
        mm = j;
        yy = k;
    }
    void prntdata(void)
    {
        cout << "\nData is " << dd << "/" << mm << "/" << yy << "\n";
    }
};
int main()
{
    Date D1;    // simple object having type Data:
    Date *dptr; // Pointer Object having type Date:
    cout << "Initializing data members using the object, with values 10, 8, 2022" << endl;
    D1.getdata(10, 8, 2022);
    cout << "Printing members using the object ";
    D1.prntdata();
    dptr = &D1;
    cout << "Printing members using the object pointer ";
    dptr->prntdata();
    cout << "\nInitializing data members using the object pointer, with values 3, 3, 2023" << endl;
    dptr->getdata(3, 3, 2023);
    cout << "printing members using the object ";
    D1.prntdata();
    cout << "Printing members using the object pointer ";
    dptr->prntdata();
    return 0;
}