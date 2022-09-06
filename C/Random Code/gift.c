#include<stdio.h>
int main()
{
    int a;
    printf("Which exam did you pass?\n");
    printf("Type 1 for Maths,Type 2 for Scince,Type 3 for Both\n");
    scanf("%d",&a);
    if (a==1)
    {
        printf("Congrats for Passing Maths Exam.Your gift is 15 rs\n");
    }
    else if (a==2)
    {
        printf("Congrats for Passing Science Exan.Your gift is 10 rs\n");
    }
    else if(a==3)
    {
        printf("Congrats for passing both Exam.Your gift is 30 rs\n");
    }
    else
    {
        printf("Enter an InValid Number. Please Enter an Valid Number");
    }
    
    return 0;
}