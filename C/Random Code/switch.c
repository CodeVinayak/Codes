// Find day using switch case
#include <stdio.h>
#include <conio.h>
void main()
{
    // int day;
    printf("Enter the Day number ");
    int x ;
    scanf("%d", &x);
    switch (x)
    {
    case 1:
    {
        printf("Monday");
        // break;
    }
    case 2:
    {
        printf("Tuesday");
        // break;
    }
    case 3:
    {
        printf("Wednesday");
        break;
    }
    case 4:
    {
        printf("Thursday");
        break;
    }
    case 5:
    {
        printf("Friday");
        break;
    }
    case 6:
    {
        printf("Saturday");
        break;
    }
    case 7:
    {
        printf("Sunday");
        break;
    }
    default:
        printf("Invalid Enter number from 1 to 7");
        break;
    }
}