//Q28: Program to print the product of even numbers from 1 to n
#include<stdio.h>
int main()
{
    int i, p, n;
    printf("Enter the number: ");
    scanf("%d", &n);
    p = 1;

    for(i=2; i<=n; i+=2)
    p = p * i;
    printf("The product is %d", p);

    return 0;
}