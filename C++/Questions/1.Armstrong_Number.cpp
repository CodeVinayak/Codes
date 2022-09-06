// C++ Program to check Armstrong Number
#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0, digit;
    cout << "Enter a 3 digit positive integer: ";
    cin >> num;
    int temp = num;
    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + (digit * digit * digit);
        temp = temp / 10;
    }
    if (sum == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";
    return 0;
}

/*An integer number is called Armstrong number if sum of the cubes of its digits is equal to the number itself. For example:
370 is an armstrong number because:

370 = 3*3*3 + 7*7*7 + 0*0*0
    = 27 + 343 + 0
    = 370
*/

// 1634 is also an armstrong number. To check more then 3 digit armstrong number just increase the digit to the size of total digit.

// Eg. sum = sum + (digit * digit * digit * digit); it can check 4 digit armstrong numbers