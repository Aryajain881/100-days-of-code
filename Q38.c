//Q38: A program to find the sum of digits of a number
#include<stdio.h>
int main()
{
    int n, r, sum;
    printf("Enter a number: ");
    scanf("%d", &n);

    sum = 0;
    while(n>0)
    {
    r = n % 10;
    sum = sum + r;
    n = n / 10;
    }
    printf("%d", sum);

    return 0;
}

