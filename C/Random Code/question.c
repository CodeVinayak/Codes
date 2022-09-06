#include <stdio.h>
#include <stdlib.h>
int main()
{
    int Choice, start;
    char cc, a, b, c, d;
    printf("Welcome to KBC\n");
    printf("Enter 1 to Start Game\n");
    printf("Enter 2 to Close Game\n");
    scanf("%d", &Choice);
    if (Choice == 2)
    {
        printf("Ok Bye");
        exit(Choice);
    }
    else if (Choice == 1)
    {
        goto start;
    }

    start:
    printf("Q1. Adware is some times called ________");
    printf("\nA.Shareware \nB.Abandonware\nC.Donationware\nD.Spyware\n");
    printf("Enter Your choise\n");
    scanf("%c", &cc);
    scanf("%d", &Choice);

    if (cc == a)
    {
        printf("Wrong Answer\n");
        exit(Choice);
    }
    else if (cc == b)
    {
        printf("Wrong Answer\n");
        exit(Choice);
    }
    else if (cc == c)
    {
        printf("Wrong Answer\n");
        exit(Choice);
    }
    else if (cc == d)
    {
        printf("Right Answer\n");
    }
    else 
    {
        printf("Invalid Character");
        exit(Choice);
    }
return 0;

}

