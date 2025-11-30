//Q45: A program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include<stdio.h>
int main()
{
    int n, i;
    float num, sum;
    printf("Enter the times you want to perform the calculation: ");
    scanf("%d", &n);
    sum = 0;

    for(i=1; i<=n; i++)
    {
     num = (2.0 * i) / (4.0 * i - 1);
     sum = sum + num;
    }
    printf("The sum is %f", sum);

    return 0;
}
