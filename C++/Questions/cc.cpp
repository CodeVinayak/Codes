#include <iostream>
using namespace std;
class go
{
public:
    int x;
    go(int a)
    {
        x = a;
    }
    go(go &i)
    {
        // Copy Constructor
        x = i.x;
    }
};
int main()
{
    go a1(10);
    go a2(a1); // Caling the copy constructor
    cout << a2.x << endl;
    return 0;
}