#include <stdio.h>
int main()
{
    // Program to check whether a year enetered by user is leap year or not

    int year;
    printf("Enter the year ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("%d is a Leap Year", year);
            }
            else
            {
                printf("%d is not a Leap year", year);
            }
        }
        else
        {
            printf("%d is a leap year", year);
        }
    }
    else
    {
        printf("%d is not a leap year", year);
    }
    return 0;
}

/*
     the year entered by the user is firstly divided by 4. If it is divisible by 4 then it is divided by 100 and then 400. If year is divisible by all 3 numbers then that year is a leap year. If the year is divisible by 4 and 100 but not by 400 then it is not a leap year. If the year is divisible by 4 but not by 100, then it is a leap year.
     (Remember that if the year is divisible by 4 and not by hundred then the program does not check the last condition, i.e., whether the year is divisible by 400). If the year is not divisible by 4 then no other conditions are checked and the year is not a leap year.

    1. A year may be a leap year if it is evenly divisible by 4.
    2. Years that are divisible by 100 (century years such as 1900 or 2000) cannot be leap years unless they are also divisible by 400. (For this reason, the years 1700, 1800, and 1900 were not leap years, but the years 1600 and 2000 were.)
    
    A “leap day” is the extra day in the leap year: February 29.
    */