//Q27: Program to print sum of first n odd numbers
#include<stdio.h>
int main()
{
    int i, n, s;
    printf("Enter the first n odd numbers who sum you want to find! ");
    scanf("%d", &n);

    s = 0;
    for(i=1; i<=n*2; i+=2)
   {s = s + i;}
    printf("The sum of first n odd numbers is %d", s);

    return 0;
}