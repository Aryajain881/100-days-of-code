//Q29: Program to find the factorial of a number n
#include<stdio.h>
int main()
{
    int n, i, p;
    printf("Enter the number whose factorial you have to find! ");
    scanf("%d", &n);
    p = 1;
    
    for(i=1; i<=n; i++)
    p = p * i;
    printf("The factorial is: %d", p);

    return 0;
}