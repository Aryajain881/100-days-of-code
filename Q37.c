//Q37: A program to find the LCM of two numbers
#include<stdio.h>
int main()
{
    int i, n, m, x, y;
    printf("Enter the numbers: ");
    scanf("%d %d", &x, &y);
    
    if(x > y)
    {
        for(i=x; ; i++)
       {
        if( i % x == 0 && i % y == 0)
        {
          printf("The LCM is %d", i);
          break;
        }
       }
    } 
    else
     {
        for(i=y; ; i++)
       {
        if( i % x == 0 && i % y == 0)
        {
          printf("The LCM is %d", i);
          break;
        }
       }
    }  
    return 0;
}