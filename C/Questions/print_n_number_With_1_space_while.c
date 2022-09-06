#include<stdio.h>
int main()
{
    // Program to print output 1,3,5,7...n n will be entered by user.
    int a=1,n;
    printf("Enter the number : ");
    scanf("%d",&n);
    while (a<=n)
    {
        printf("%d\n",a);
        a=a+2;
    }
    

    return 0;
}