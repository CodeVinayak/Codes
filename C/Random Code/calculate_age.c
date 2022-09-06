#include <stdio.h>
#include "calculate_age.h"
int x;
int main(void)
{
    printf("Enter the year you are born\n");
    scanf("%u", &x);
    printf("Your current age is : %u", calculateAge(x));
}