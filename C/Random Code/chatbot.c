#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>

char user_input[];
int main()
{
    system("cls");
    printf("Welcome to chatbot\n");
    while (1)
    {
        printf("===>");
        gets(user_input);
        if (strcmp(user_input,"exit")==0)
        {
            system("cls");
            printf("Bye ...\n ");
            break;
        }
        else if(strcmp(user_input,"hi")==0)
        {
            system("cls");
            printf("Hi Vinayak Sir\n");
            // break;
        }
        if(strcmp(user_input,"Hi")==0)
        {
            system("cls");
            printf("Hi Vinayak Sir\n");
            // break;
        }
    }
    
    return 0;
}