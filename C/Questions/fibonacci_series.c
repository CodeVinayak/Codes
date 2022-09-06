#include <stdio.h>
int main()
{
    //Printing Fibonacci Series n number asked by user.
    int n;               //User will asked how many number to print
    int a = 0, b = 1, c; // a=0 and b=1 is important.
    printf("Enter a number ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) // i will create to compare it with user enetered number
    {
        printf("%d\n", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}