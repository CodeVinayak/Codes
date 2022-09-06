//Print series 1 10 2 9 3 8 4 7 5 6
#include <stdio.h>
int main()
{
    int a=1,b=10;
    int i=1;
    while (i<=5)
    {
        printf("%d\n",a);
        a++;
        printf("%d\n",b);
        b--;
        i++;
    } 

    
    return 0;
}