#include <stdio.h>
#include<conio.h>
int main()
{
    int a[10], i, item, flag = 0;
    // clrscr();
    printf("Enter the data in the array ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        printf("Enter the element to be searched ");
        scanf("%d", &item);
        for (i = 0; i < 10; i++)
        {
            if (item == a[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)

            printf("Element Not Found");
        else
            printf("Element Found at Position =%d", i);
        
    }
    return 0;
}