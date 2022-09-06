// fib_recursive(int n);
//     if n==1 or n==2:
//     return n-1
//     else:
//      return fib_recursive(n-1)+fib_recursive(n-2)
#include<stdio.h>
int main()
{   
    int a,b,c;
    printf("0,1");
    a=0;b=1;
    for (int i = 1; i <=42; i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\nde",c);
    }

    return 0;
}