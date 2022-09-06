#include <stdio.h>
#include <conio.h>

int main()
{
    int reverse = 0, sum = 0, product = 1, wanna, number, reminder;
    printf("Enter the number ");
    scanf("%d", &number);
    printf("Choose one\n 1.Reverse number \n 2.Sum Number \n 3.Product number\n");
    scanf("%d", &wanna);
    if (wanna == 1)
    {
        printf("The reverse of the number is ");
        while (number != 0) //  when number is not equal zero
        {
            reminder = number % 10; // reminder equal hojayega number modulus 10.
            reverse = reverse * 10 + reminder;
            number = number / 10;
        }
        printf("%d", reverse);
    }
    if (wanna == 2)
    {
        printf("The sum of number is ");
        while (number != 0)
        {
            reminder = number % 10;
            sum = sum + reminder;
            number = number / 10;
        }
        printf("%d", sum);
    }
    if (wanna == 3)
    {
        printf("The product of number is ");
        while (number != 0)
        {
            reminder = number % 10;
            product = product * reminder;
            number = number / 10;
        }
        printf("%d", product);
    }
    return 0;
}