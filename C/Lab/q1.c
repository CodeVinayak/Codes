#include <stdio.h>
int main()
{
    //If a five digit of number is input through keyboard write a program to reverse the number,print sum and product of number.
    int n, r, sum = 0, reverse = 0, product = 1;
    printf("Enter the number\n");
    scanf("%lld", &n);
    while (n != 0)
    {
        r = n % 10;
        reverse = reverse * 10 + r;
        sum = sum + r;
        product = product * r;
        n = n / 10;
    }
    printf("The Reverse of Entered number is : %lld\n", reverse);
    printf("The Sum of Entered number is : %lld\n", sum);
    printf("The Product of Entered number is : %lld\n", product);

    return 0;
}