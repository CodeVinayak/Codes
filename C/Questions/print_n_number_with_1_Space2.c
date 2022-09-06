#include <stdio.h>
int main()
{
    // Program to print output 2,4,6,8...n n will be entered by user.
    int  n;
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("The number are\n");
    for (int a = 2; a <= n; a=a+2)
    {
        printf("%d\n", a);
        // a=a+2; 
        //a++ + ++a
    }

    return 0;
}