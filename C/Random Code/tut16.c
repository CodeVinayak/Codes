#include<stdio.h>
int main()
{   
    int i,age;
    for ( i=1  ; i < 5; i++)
    {
        printf("%d\nEnter your age: \n ",i);
        scanf("%d",&age);
        // if (age>10)
        // {
        //     break;  // break ka matlab jo bhi loop chal rha hai uske bahar send krdena
        //     // it can be use with loops and switch case expression.
        // 
        if (age<18)
        {
            continue;
        }
        
        printf("We have not come across any continue statements");
    }
    

    return 0;
}