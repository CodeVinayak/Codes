#include <stdio.h>
int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    // array[0] = 515;//if change any value here it get reflected in main()
    return 0;
}
int fun2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        // printf("The value at %d is %d\n",i,ptr[i]);
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr + 2) = 99;
    return 0;
}
void fun3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d,%d is %d\n", i, j, arr[i][j]);
        }
    }
}
int main()
{
    int arr[][2] = {{4, 19},{22, 5}};

    // printf("The value at index 0 is %d\n",arr[0]);
    // func1(arr);
    // printf("The value at index 0 is %d\n",arr[0]);
    // fun2(arr);
    // fun2(arr);
    fun3(arr);
    return 0;
}