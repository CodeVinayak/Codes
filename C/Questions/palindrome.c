/* What is palindrome?

A Number or a word or a phrase if read backwards gives the same number or a word or a phrase as it is being read forward.

Example: 11211,24542

We need to reverse the number if the reversed number is equal to actual number thean we can say that the number is palindrome.*/

#include <stdio.h>
int main()
{
    int n, result = 0, q, rem;
    printf("Enter the number ");
    scanf("%d", &n);

    q = n;
    while (q != 0)
    {
        rem = q % 10;
        result = result * 10 + rem;
        q = q / 10;
    }
    if (result == n)
        printf("Its a palindrome");
    else
        printf("No! its not a palindrome");
}