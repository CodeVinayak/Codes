#include <stdio.h>
#define PI 3.14
int main()
{
    int a=8;
    const float b=8.5847;
    // PI = 7.33;
    // printf("%f",PI);
    // float b=5.57;// cannot do this since b is a constant
    // printf("Hello World\n");
    // printf("The value of a is %d and the value of b is %f/n",a , b);
    // printf("The value of b is %0.2f ", b);
    printf("tab character \t\t\t my backslash \\n");
    return 0;

    /*Format specificer 
     1. %c -> Charater
     2. %d -> Integer
     3. %f -> Float
     4. %e -> Long
     5. %lf -> Double
     6. %Lf -> Long Double

     const float b=9.5 agar likh diya gaya hai matlab ki wo term constant rahega agar bad me float  float b=8.5 likhoge fir bhi output 9.5 aygea because of const keyword.
     It basically fix the const int,float or anything. 
    */
}