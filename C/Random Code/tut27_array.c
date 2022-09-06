#include <stdio.h>
int main()
{
    int arr[]={51,2,3,4,5,6,7};
    printf("The value at poisition 0 of array is %d\n",arr[0]);
    printf("The value at poisition 1 of array is %d\n",arr[1]);
    printf("The address of first element of array is %d\n",&arr[0]);
    printf("The address of second element of array is %d\n",&arr[1]);
    printf("The address of second element of array is %d\n",arr+1);

    printf("The value at address of first element of array is %d\n",*(&arr[0]));
    printf("The value at address of first element of array is %d\n",arr[0]);
    printf("The value at address of second element of array is %d\n",*(arr+1));
    printf("The value at address of second element of array is %d\n",*(&arr[1]));
    return 0;
}