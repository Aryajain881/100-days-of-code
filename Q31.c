//Q31: A program to take a number as input and print its equivalent binary representation.
#include<stdio.h>
#include<math.h>
int main()
{
    int i, n, a, b;
    printf("Enter a number: ");
    scanf("%d", &n);
    b = 0;

    for(i=0; n!=0; i++)
    {
    a = n % 2;
    n = n / 2;
    b = b + (pow(10, i) * a);
    }  
printf("The binary expression is %d", b);

return 0;

}
