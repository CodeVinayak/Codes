#include<stdio.h>
int main()
{   
    printf("Pointers in c\n");
    int a=76;
    int *ptra = &a;
    int *ptr2 = NULL;
    printf("The value of a is %d\n",a);
    printf("The address of a is %p\n",&a);
    printf("The address of a is %p\n",ptra);
    printf("The address of  pointer to a is %p\n",&ptra);
    printf("The address of a is %d\n",*ptra);
    printf("The address of ptra2 is %p\n",ptr2);
    return 0;
}