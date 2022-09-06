#include <stdio.h>
void swap(int *x, int *y)
{
    int c;
    c = *x;
    *x = *y;
    *y = c;
    return;
}
int main()
{
    int a = 34;
    int b = 76;
    printf("Before swap\n");
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    swap(&a,&b);//call be reference
    printf("After Swap\n");
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
        return 0;
}