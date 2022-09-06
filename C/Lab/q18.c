#include <stdio.h>
// Function Prototype
// C program to illustrate
// call by value
void swap(int x, int y);//declare
void swap(int x, int y)//define
{
    int t;
    t = x;
    x = y;
    y = t;
    printf("x=%d y=%d\n", x, y);
}
// Main function
int main()
{
    int a = 10, b = 20;
    // Pass by Values
    swap(a, b);//call
    printf("a=%d b=%d\n", a, b);
    return 0;
}
// Swap functions that swaps
// two values
