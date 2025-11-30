//Q36: A program to find the HCF (GCD) of two numbers
#include<stdio.h>
int main()
{
    int n, m, i, hcf;
    printf("Enter the numbers: ");
    scanf("%d %d", &n, &m);

    if(n<m)
    {
        for(i=1; i<=m; i++)
        if(n%i==0 && m%i==0)
        hcf = i;
        printf("%d", hcf);
    }
    else
    { for(i=1; i<=n; i++)
        if(n%i==0 && m%i==0)
        hcf = i;
        printf("%d", hcf); 
    }
    return 0;
}

