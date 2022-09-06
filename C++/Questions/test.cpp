#include <iostream>
using namespace std;
class Myclass
{
public:
     int x, y;
     // Declaring function inside the class
     void setvalue(int a, int b);
     // Declaring and defining function inside the class
     void getvalue()
     {
          cout << "x : " << x << "\n";
          cout << "y : " << y;
     }
};
// Defining function outside the class
void Myclass::setvalue(int a, int b)
{
     x = a;
     y = b;
}
int main()
{

     Myclass obj;
     obj.setvalue(10, 20);
     obj.getvalue();
     return 0;
}