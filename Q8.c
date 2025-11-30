//Q8: Program to display the sum of first n natural numbers
#include<stdio.h>
int main()
{
    int a, n, sum;
    printf("Input the value of n: ");
    scanf("%d", &n);
    a=1;
    sum= (n/2)*(a+n);
    printf("Sum = %d", sum);
    return 0;
}