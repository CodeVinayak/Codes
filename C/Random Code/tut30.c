// Take Input from the user and ask user to choose 0 for Triangular star patern and 1 for reversed traingular star pattern
//then print the pattern accordingly
// *
// **
// ***
// **** -> Triangular star pattern

// ****
// ***
// **
// * -> Reversed triangular star pattern
#include <stdio.h>

void startpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        /* code */
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void reversestartpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        /* code */
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int rows, type;
    printf("Enter 0 for star pattern and 1 for reversed star pattern\n");
    scanf("%d", &type);
    printf("How many rows do you want?\n");
    scanf("%d", &rows);
    // if (type==0)// same if function code is used below in switch case
    // {
    //     startpattern(rows);
    // }
    // if (type==1)
    // {
    //     reversestartpattern(rows);
    // }
    switch (type)
    {
    case 0:
        startpattern(rows);
        break;
    case 1:
        reversestartpattern(rows);
    default:
        printf("you have entered invalid choise");
        break;
    }

    // printf("How many rows do you want?\n");
    // scanf("%d",&rows);
    // startpattern(rows);
    // printf("Now it time for revese\n");
    // reversestartpattern(rows);

    return 0;
}
