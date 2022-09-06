//Operator as case in switch cases
#include <stdio.h>
// #include<conio.h>
int main()
{
    char function;
    int num1, num2,ans;
    printf("Enter the number 1 \n");
    scanf("%d", &num1);
    printf("Enter the number 2 \n");
    scanf("%d", &num2);
    printf("Choose +,-,*,/ \n");
    fflush(stdin);
    scanf("%c", &function);

    switch (function)
    {
    case '+':
    {
        ans=num1+num2;
        break;
    }
    case '-':
    {
        ans=num1-num2;
        break;
    }
    case '*':
    {
        ans=num1*num2;
        break;
    }
    case '/':
    {
        ans=num1/num2;
        break;
    }
    default:
        printf("Invalid arguments");
        break;
    }
    printf("Answer : %d",ans);

    return 0;
}