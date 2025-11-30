//Q13: Program to input a year and check if it is a leap year or not using conditional statements
#include<stdio.h>
int main()
{
    int year;
    printf("Input the year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {printf("The year is a leap year.");}
    else if (year % 100 == 0)
    {printf("The year is not a leap year.");}
    else if (year % 4 == 0)
    {printf("The year is a leap year.");}
    else
    {printf("The year is not a leap year.");} 
    return 0; 
}
