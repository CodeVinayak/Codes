#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age\n");

    scanf("%d",&age);
    printf("You have entered %d as your age\n",age);
    if (age>=18)
    {
        printf("You can Vote");
    }
    else if (age>=10)
    {
        printf("Your age is between 10-18 and you can vote for kids");
    }
    else if (age>3)
    {
        printf("Your age is between 3-10 and you can vote for babies");
    }
    else {
        printf("You cannot vote!");
    }
    return 0;
}

/*
    maths and science - 45
    maths - 15
    science - 15

    print the types of gifts you are giving to them
*/