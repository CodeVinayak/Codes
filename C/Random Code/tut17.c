#include<stdio.h>
int main()
{   
    int num;
    label:
    // printf("We are inside label");
    // goto end;
    // printf("Hello world\n");
    // goto label;
    // end:
    // printf("\nwe are at end");
    
    for (int i = 0; i < 8; i++)
    {
       printf("%d\n",i);
       for (int j = 0; j < 8; j++)
       {
           printf("Enter the number between 0 to 18.For exit enter 0\n");
           scanf("%d",&num);
           if (num==0)
           {
               goto end;
           }
           
       }
       
    }
    end:

    return 0;
}