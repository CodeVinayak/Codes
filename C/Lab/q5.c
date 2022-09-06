#include <stdio.h>
int main()
{
    int number, reminder;
    // Program to check whether a number entered by the user is  even or odd.
    printf("Enter the number : ");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("%d is even number",number);
    }
    else
    {
        printf("%d is odd number",number);
    }
    return 0;
}