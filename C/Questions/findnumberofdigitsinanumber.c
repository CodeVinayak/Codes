#include <stdio.h>

int main()
{
    //Program to Count Number of Digits in an Integer

    int n, counter = 0;
    printf("Enter the number\n");
    scanf("%d", &n);

    if (n == 0)
        printf("There is only 1 digit in your number");
    else
    {
        while (n != 0)
        {
            n = n / 10; 
            counter++;
        }
        printf("There are %d digits in your number", counter);
    }
    return 0;
}