#include <stdio.h>
int main()
{
    // Program to find reverse number
    //vinayak singh
    long long int n, reverse = 0, rem;
    printf("Enter a number: ");
    scanf("%lld", &n);
    while (n != 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }
    printf("Reversed Number: %lld", reverse);
    return 0;
}