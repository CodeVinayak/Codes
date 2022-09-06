#include <stdio.h>
void printstr(char str[])
{
int i=0;
while (str[i]!='\0')
{
    printf("%c",str[i]);
    i++;
    printf("\n");
}
}
int main()
{
    // char str[]={'v','i','n','a','y','a','k','\0'};
    // char str[]="vinayak"; 
    char str[40]; //str[n] n+1 value hona chaiye in taki null value print na ho for exam to print harry 5 letter string value  must be 6 else null value will also print
    gets(str);
    // printstr(str);

    printf("using printf %s\n",str);
    printf("using puts: \n");
    puts(str);

    return 0;
}
//string has extra value 0