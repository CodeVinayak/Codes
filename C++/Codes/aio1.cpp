#include<iostream>
#include<conio.h>
int main()
{
    int n,num,f=1;
    std::cout<<"Enter any number ";
    std::cin>>num;
    n=num;
    do
    {
        f=f*n;
        --n;
    }while(n>0);
    std::cout<<"The factorial of "<<num<< " is "<< f;
    getch();
}