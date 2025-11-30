//Q2: Program to display sum, product, division and difference of two integers
#include<stdio.h>
int main()
{
    float a, b, sum, difference, product, quotient;
    printf("Input the first and second two integers: ");
    scanf("%f %f", &a, &b);
    sum= a+b;
    difference= a-b;
    product= a*b;
    quotient= a/b;
    printf("Sum= %f\n",sum);
    printf("Difference= %f\n",difference);
    printf("Product= %f\n",product);
    printf("Quotient= %f\n",quotient);
    return 0;
}