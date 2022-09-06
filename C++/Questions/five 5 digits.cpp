#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    /*5 Digit is entered through keyboard 
    Find the sum of digit
    for example input is 41235
    the sum of digit will be 4+1+2+3+5*/

    // Solving the problem using Modulas Operator
    int number;
    float reminder,sum;
    cout<<"Enter the Number : ";
    cin>>number;
    cout<<("The sum of all digits of number is ");
        while (number != 0)
        {
            reminder = number % 10;
            sum = sum + reminder;
            number = number / 10;
        }
        cout<<sum;

    return 0;
}