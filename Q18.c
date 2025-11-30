//Q18: Program to assign grades based on a percentage input
#include<stdio.h>
int main()
{
    int percentage;
    printf("Enter the percentage: ");
    scanf("%d", &percentage);

    if( percentage >= 95)
    printf("Grade: A+");
    else if( percentage >= 90 && percentage < 95 )
    printf("Grade: A");
    else if( percentage >= 80 && percentage < 90 )
    printf("Grade: B");
    else if( percentage >= 70 && percentage < 80 )
    printf("Grade: C");
    else if( percentage >= 60 && percentage < 70 )
    printf("Grade: D");
    else if( percentage >= 50 && percentage < 60 )
    printf("Grade: E");
    else
    printf("Grade: F");
     
    return 0;
    }