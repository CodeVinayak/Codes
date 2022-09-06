#include <stdio.h>
#define VALUE 1
int main(void)
{
// #ifdef VALUE
//     printf("Value is defined\n");
// #else
//     printf("Value is not defined\n");
// #endif

#if !defined VALUE // ! matlab not
 printf("Value is not defined\n");
#else
 printf("Value is defined\n");
#endif
}
