//Q11: Program to check whether an integer is even or odd via if-else statement
#include<stdio.h>
int main()
{
    int i;
    printf("Input the integer: ");
    scanf("%d", &i);
    if(i % 2 == 0)
    {printf("The number is even.");}
    else
    {printf("The number is odd.");}
    return 0;
}