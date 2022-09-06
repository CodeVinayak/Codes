#include <stdio.h>
int calculateAge(int year) {
 const int CURRENT_YEAR = 2020;
 return CURRENT_YEAR - year;
}
int main(void) {
 printf("%u", calculateAge(2000));
}