//Ternary operator in c
// Syntax : valiable = Experssion 1? Expression 2:Expression 3
#include <stdio.h>
int main()
{
    int a, b, c;
    a = 8;
    b = 95;
    c = 45;
    (a > b) ? ((a > c) ?printf("a is the largest number"):printf("c is the largest number")): ((b > c) ?printf("b is the largest number"): printf("c is the largest nnumber"));

    return 0;
}