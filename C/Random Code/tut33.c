#include <stdio.h>
#include <stdlib.h>
void main()
{
    int choice;
    while (1)
    {
        printf("\n1. Factorial");
        printf("\n2. Prime");
        printf("\n3. Odd/Even");
        printf("\n4. Exit");
        printf("\nYour choice? ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            /* logic for factorial of a number */
            break;
        case 2:
            /* logic for deciding prime number */
            break;
        case 3:
            /* logic for odd/even */
            break;
        case 4:
            printf("leaving program");
            exit();
        case 4+1:
            exit();
        }
        
    }
    // return 0;
}