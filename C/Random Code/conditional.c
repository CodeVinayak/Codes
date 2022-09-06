#include <stdio.h>
const int DEBUG = 0;
int main(void) {
#if DEBUG == 0
 printf("I am NOT debugging\n");
#else
 printf("I am debugging\n");
#endif
}
