//Find odd and even number between 1 to 10
#include <stdio.h>
void main()
{
    int i=1;
    while (i<=10)
    {
        if (i%2==0)
        {
            printf("%d is even\n",i);
        }
        else
        {
            printf("%d is odd\n",i);
        }
    i++;   
    }
    
    // return 0;
}