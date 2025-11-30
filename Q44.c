//Q44: A program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include<stdio.h>
int main()
{
    int i, n;
    float sum, num;
    printf("Enter the times you want to perform the calculation: ");
    scanf("%d", &n);
    sum = 1;

    for(i=2; i<=n; i++)
    {
     num = (2.0* i - 1.0) / (2.0 * i);
     sum = sum + num;
    } 
    printf("The sum is %f", sum);
    
    return 0;
}
