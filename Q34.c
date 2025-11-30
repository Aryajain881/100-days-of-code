//Q34: A program to check whether a number is prime or not
#include<stdio.h>
int main()
{
    int i, n, x, y;
    printf("Enter the number: ");
    scanf("%d", &n);

    if(n <= 1)
    printf("The number is not prime.");
    else 
    {
    for(i=1; i<=n; i++)
    {x = n % i;
    if(x == 0)
     {y++;}}
    if(y > 2)
    printf("The number is not prime."); 
    else
    printf("The number is prime.");
    }

    return 0;
}