#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice;
    while (1)
    {
        printf("\n1. Factorial");
        printf("\n2. Prime");
        printf("\n3. Odd/Even");
        printf("\n4. Exit");
        printf("\nYour choice?\n");
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
            printf("Ok Bye");
            exit(choice);
        }
        
    }
    return 0;
}