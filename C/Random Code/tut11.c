#include <stdio.h>
int main ()
{
    int age,marks;
    printf("Enter Your Age: ");
    scanf("%d",&age);
    printf("Enter Your Marks: ");
    scanf("%d",&marks);
    switch (age)
    {
    case 3:
        printf("The age is 3\n");
        switch (marks)
        {
        case 42:
            printf("Your marks is 42");
            break;
        
        default:
            printf("Your marks is not 42");
            break;
        }
        break;
    case 18:
        printf("The age is 18\n");
        break;
    case 10:
        printf("The age is 10\n");
        break;
    default:
    printf("Your age is not 3,10,18\n");
        break;
    }




    
/*
Rules for Switch Statement
1.Switch expression must be an Int or Char.
2.Case value must be an integer or a character.
3.Case must come inside switch.
4.Break is not a must.
5.We can use switch inside a switch also
*/
return 0;
}