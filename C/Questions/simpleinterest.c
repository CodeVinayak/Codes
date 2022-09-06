#include<stdio.h>
int main()
{
    float SI,PrincipleAmount,RateofInterest,Time;
    //SI is Simple Interest
    //Time is in Years.
    printf("Enter the Principal Amount\n");
    scanf("%f",&PrincipleAmount);
    printf("Enter the rate of interest\n");
    scanf("%f",&RateofInterest);
    printf("Enter the time duration of loan\n");
    scanf("%f",&Time);
    SI=(PrincipleAmount*RateofInterest*Time)/100;
    printf("The Simple Interest of entered details is %f",SI);
}