// C program to illustrate
// Call by Reference
#include <stdio.h>
// Function Prototype
// void swap(int*, int*);
void swap(int* x, int* y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
    printf("x=%d y=%d\n", *x, *y);
}
// Main function
int main()
{
    int a = 10, b = 20;
    // Pass reference
    swap(&a, &b);
    printf("a=%d b=%d\n", a, b);
    return 0;
}
// Function to swap two variables
// by references
// Output:
// x=20 y=10
// a=20 b=10