#include <stdio.h>
int main()
{
    //Program to calculate Sum of digits of a given number

    // Vinayak Singh
    
    int n, r, sum = 0;
    printf("Enter the number\n");
    scanf("%d", &n);
    while (n > 0)
    {
        r = n % 10;    // divide the whole number by 10
        sum = sum + r; // add remainder to sum
        n = n / 10;
    }
    printf("The sum of given digit of number is  %d", sum);
    
    return 0;
}
// https://www.youtube.com/watch?v=1PxCOI3x2Hc&ab_channel=SlideHunt