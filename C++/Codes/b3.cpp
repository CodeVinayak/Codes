// Count the number of words in a string.

#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    char a[10];
    int w=0,i;
    cout<<"Enter the string\n";
    gets(a);
    for ( i = 0; a[i] !='\0'; i++)
    {
        if (a[i]==32||a[i]==':'||a[i]==9)
        {
            w++;
        }
        cout<<"\nnumber of words are:\n"<<w+1;
        // getch();

    }
    return 0;
}