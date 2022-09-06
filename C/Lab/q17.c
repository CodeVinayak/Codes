//Learnprogramo
#include <stdio.h>
// Increment in Pointer Arithmetic
int main()
{
    int number = 50;
    int *p;
    p = &number;
    printf("Address of p variable is %u \n", p);
    p = p + 1;
    printf("After increment: Address of p variable is %u \n", p);
    return 0;
}