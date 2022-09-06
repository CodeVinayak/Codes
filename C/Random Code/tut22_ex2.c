#include <stdio.h>
int main()
{
    int a, b;
    float c;
    printf("\n Enter 1 for converting Kilometer to Mile\n Enter 2 for converting inch to foot \n Enter 3 for converting cms to inch \n Enter 4 for converting pound to kgs \n Enter 5 for converting inches to meters\n");
    scanf("%d", &a);
    if (a == 1)
    {
        printf(" Enter 1 for converting Kilometer to mile \n Enter 2 for converting Mile to Kilometer\n");
        scanf("%d", &b);
        if (b == 1)
        {
            printf("Enter number in Kilometer for converting into mile \n");
            scanf("%f", &c);
            printf("The number in miles is : %f", c / 1.609);
        }
        if (b == 2)
        {
            printf("Enter number in Mile for converting into Kilometer \n");
            scanf("%f", &c);
            printf("The number in kilometer is : %f", c * 1.609);
        }
    }
    if (a == 2)
    {
        printf("Enter 1 for converting inch to foot \n Enter 2 for converting foot to inches\n");
        scanf("%d", &b);
        if (b == 1)
        {
            printf("Enter number it will convert inch to foot \n");
            scanf("%f", &c);
            printf("The number in foot is : %f", c / 12);
        }
        if (b == 2)
        {
            printf("Enter number it will convert foot into inch \n");
            scanf("%f", &c);
            printf("The number in foot is : %f", c * 12);
        }
    }
    if (a == 3)
    {
        printf("Enter 1 for converting Cms to inch \n Enter 2 for converting inch to cms\n");
        scanf("%d", &b);
        if (b == 1)
        {
            printf("Enter number it will convert Cms into inch \n");
            scanf("%f", &c);
            printf("The number in inch is : %f", c / 2.54);
        }
        if (b == 2)
        {
            printf("Enter number it will convert inch into cms \n");
            scanf("%f", &c);
            printf("The number in cms is : %f", c * 2.54);
        }
    }
    if (a == 4)
    {
        printf("Enter 1 for Converting Pound to kgs\n Enter 2 for converting kgs to pound\n");
        scanf("%d", &b);
        if (b == 1)
        {
            printf("Enter number in Pound for Converting into kgs\n");
            scanf("%f", &c);
            printf("The number in kgs is :%f", c / 2.205);
        }
        if (b == 2)
        {
            printf("Enter number in kgs for Converting into Pound \n");
            scanf("%f", &c);
            printf("The number in Pound is : %f", c * 2.205);
        }
    }
    if (a == 5)
    {
        printf("Enter 1 for converting inches to meter\n Enter 2 for convertng Meter to inch\n");
        scanf("%d", &b);
        if (b == 1)
        {
            printf("Enter Number in inches for converting into meter\n");
            scanf("%f", &c);
            printf("The number in Meter is :%f", c / 39.37);
        }
        if (b == 2)
        {
            printf("Enter Number in Meter for converting into inches \n");
            scanf("%f", &c);
            printf("The number in inches is :%f", c * 39.37);
        }
    }

    return 0;
}