//Simple while loop
#include <stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    i =1;

    scanf("%d",&n);
    // clrscr();
    while (i<=n)
    {
        printf("%d\n",i);
        i++;
        if (i==4)
        {
            break;
        }
        
        // i++;
    }
    
}