//Q39: A program to find the product of odd digits of a number
#include<stdio.h>
int main()
{
    int i, n, product;
    printf("Enter the digit: ");
    scanf("%d", &n);
    product = 1;

    while(n > 0) 
    {
    i = n % 10;
    if( i%2 != 0)
    { product = product * i; }
    n = n / 10;
    }
    printf("The product is: %d", product);
    
    return 0;
}