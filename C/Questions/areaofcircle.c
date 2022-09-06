#include <stdio.h>
#include <conio.h>
int main()
{
    //Calculate of area of circle if radius is entered by user.
    //Fromula Area=Pie*radius*radius
    float pie = 3.1416;
    float radius, area;
    printf("Enter the value of Radius\n");
    scanf("%f", &radius);
    area = pie * radius * radius;
    printf("The Area of circle of radius %f is %f ", radius , area);
    getch();
    return 0;
}