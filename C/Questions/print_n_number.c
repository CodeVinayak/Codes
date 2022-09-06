#include <stdio.h>
int main()
{
    // Program to print output 1,2,3,4,5...n n will be entered by user.
    int a, n;
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("The Number are:-\n");
    for (a = 1; a <= n; a++)
    {
        printf("%d\n", a);
    }

    return 0;
}