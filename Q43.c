//Q43: A program to check if a number is a strong number
#include<stdio.h>
int main()
{
    int i, k, num, l, sum, fact;
    printf("Enter any number to check Strong number: ");
    scanf("%d", &num);
    k = num;
    sum = 0;

    while(num > 0)
    {   l = num % 10;
        fact = 1;
        for(i=1; i<=l; i++)
        { fact = fact * i; }
         sum = sum + fact;
         num = num / 10;
    }
    if(sum == k)
        printf("It is strong number.");
    else
        printf("It is not a strong number.");

    return 0;
}
