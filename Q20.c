//Q20: Program to display the day of the week based on a number from 1-7 using switch-case
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    switch (n)
    {
        case 1: printf("The day is Monday."); break;
        case 2: printf("The day is Tuesday."); break;
        case 3: printf("The day is Wednesday."); break;
        case 4: printf("The day is Thursday."); break;
        case 5: printf("The day is Friday."); break;
        case 6: printf("The day is Saturday."); break;
        case 7: printf("The day is Sunday.");
    }
    return 0;
}