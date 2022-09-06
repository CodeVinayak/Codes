//  function for string Comparison.
#include<iostream>
using namespace std;
int main()
{
    string str1 = "hello";
    string str2 = "hello";
    if (str1.compare(str2) == 0)
    {
        cout << "The two strings are equal.";
    }
    else
    {
        cout << "The two strings are not equal.";
    }
}