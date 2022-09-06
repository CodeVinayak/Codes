#include <stdio.h>
int main(void)
{
int  a ;
scanf("%d", &a);
unsigned int b = (unsigned int)a;
printf("The value of signed variable is: %u\n",a);
printf("The value of unsigned variable is: %u\n",b);
return 0;
}