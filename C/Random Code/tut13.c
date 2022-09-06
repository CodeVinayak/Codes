#include <stdio.h>
int main()
{
    int num, index = 1;
    printf("Enter a number: \n");
    scanf("%d", &num);

    do
    {
        printf("%d\n", index);
        index = index + 1;
    } while (index <= num); // < use kro ya for <= use kro

    return 0;
}

// Do while loop execute at least once