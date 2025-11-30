//Q42: A program to check if a number is a perfect number.
#include<stdio.h>
int main()
{
    int n, i, r, sum;
    printf("Enter any number: ");
    scanf("%d", &n);
    sum = 0;

    for(i=1; i<n; i++)
    { if(n % i == 0)
      sum = sum + i; }
    
    if(n == sum)
    printf("the number is a perfect number.\n");
    else
    printf("The number is not a perfect number.\n");

    return 0;
}
