#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 2;
    switch (a)
    {
    case 0:
        /* do something */
        printf("a");
        break;
    case 1:
        /* do something else */
        printf("%d", a);
        break;
    case 2:
        /* do something else */
        printf("helo");
        break;
    default:
        printf("d");
        break;
    }

    return 0;
    // getch();
}