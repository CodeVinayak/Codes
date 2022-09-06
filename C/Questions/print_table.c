#include <stdio.h>
/*
Print a multiplication of a table of a number entered by the user in pretty form 

example :
Input
Enter the number you want multiplication table of:
6

output 
Table of 6:
6 x 1 = 6
*/
int main()
{
    int a, b, c = 1;
    printf("Enter the number: \n");
    // scanf ("%d" , &a);   
    // printf ("a*1 is = %d\n", a*1);
    // printf ("a*2 is = %d\n", a*2);
    // printf ("a*3 is = %d\n",a*3);
    // printf ("a*4 is = %d\n",a*4);
    // printf ("a*5 is = %d\n",a*5);
    // printf ("a*6 is = %d\n",a*6);
    // printf ("a*7 is = %d\n",a*7);
    // printf ("a*8 is = %d\n",a*8);
    // printf ("a*9 is = %d\n",a*9);
    // printf ("a*10 is = %d\n",a*10);

    scanf("%d", &b);
    do
    {
        printf("%d\n", b * c);
        c = c + 1;
    } while (c <= 10);

    return 0;
}