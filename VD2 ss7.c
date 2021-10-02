/* To test for a leap year */
#include <stdio.h>
void main()
{
    int year;
    printf("Please enter a year:");
    scanf("%d",&year);
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    printf("%d is a leap year", year);
}
