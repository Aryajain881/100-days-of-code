//Q35: A program to print all factors of a given number
#include<stdio.h>
int main()
{
    int i, n, x;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {x = n % i;
     if(x == 0)
    printf("%d ", i);
    }
    return 0;
} 
