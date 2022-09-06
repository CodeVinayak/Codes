#include <stdio.h>
int main()
{
    // int a=34;
    char b='3';
    // int* ptra=&a;
    char* ptra=&b;
    printf("%d\n",ptra);
    ptra++;
    printf("%d\n",ptra);//it will add n number because it depents on the if it is give int then(size of 1 int is 4)if it is given (char it will add 1 because the character char use 1 bit)
    ptra--;
    printf("%d\n",ptra);
    return 0;
}