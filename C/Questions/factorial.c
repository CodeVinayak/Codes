/*
The factorial of a positive number n is given by:

factorial of n (n!) = 1 * 2 * 3 * 4....n
The factorial of a negative number doesn't exist. And, the factorial of 0 is 1.

Factorial Program using loop
*/
#include <stdio.h>
int main()
{
  int i, fact = 1, number;
  printf("Enter a number: ");
  scanf("%d", &number);
  for (i = 1; i <= number; i++)
  {
    fact = fact * i;
  }
  printf("Factorial of %d is: %d", number, fact);
  return 0;
}