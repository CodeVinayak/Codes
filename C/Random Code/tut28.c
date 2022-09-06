#include<stdio.h>
int fib_recursivve(int n)
{
    if (n==1 || n==2){
    return n-1;
    }
    else
     return fib_recursivve(n-1)+fib_recursivve(n-2);
}
int fib_iterative(int n)
{
    int a=0;
    int b=1;
    for (int i = 0; i < n-1; i++)
    {
        b=a+b; //1
        a=b-a; //1
    }
    
    return a;
}
int main()
{   
    int number;
    printf("Enter the index to get find fibonaci series\n");
    scanf("%d",&number);
    printf("The value of fibonnaci number at Position no %d using iterative approach is %d\n",number,fib_iterative(number));
    printf("The value of fibonnaci number at Position no %d using revursive approach is %d\n",number,fib_recursivve(number));
    return 0;
}