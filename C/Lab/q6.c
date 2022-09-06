/*
Input the character.
Find the ASCII value of the character.
If the ASCII value of the character is between 65 and 90, print "Upper".
If the ASCII value of the character is between 97 and 122, print "Lower".
If the ASCII value of the character is between 48 and 57, print "Number".
Else, print "Symbol
*/
// C program to check whether a given character is upper case, lower case, number or special character

#include <stdio.h>
int main()
{
	char ch;
	printf("Enter any character: ");
	scanf("%c", &ch);
	if (ch >= 65 && ch <= 90)
		printf("Upper");
	else if (ch >= 97 && ch <= 122)
		printf("Lower");
	else if (ch >= 48 && ch <= 57)
		printf("Number");
	else
		printf("Symbol");
	return 0;
}