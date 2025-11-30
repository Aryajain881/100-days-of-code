//Q16: Program to input three numbers and find out which number is the highest using if-else
#include<stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    printf("Enter the third number: ");
    scanf("%d", &n3);

    if(n1 > n2)
    { if( n1 > n3)
        {printf("%d is the largest number.", n1); }
      else
      printf(" ");  
    }
    else if(n2 > n3)
    { if( n2 > n1)
        {printf("%d is the largest number.", n2);}
       else
       printf(" ");
    }
    else
    {printf("%d is the largest number.", n3);}

    return 0;
}