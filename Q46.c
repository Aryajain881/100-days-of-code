/* Q46: A program to print the following pattern:
*****
*****
*****
*****
***** */
#include<stdio.h>
int main()
{
    int i, j;
    char s;
    s = '*' ;

    for(i=1; i<=5; i++)
    {   
        for(j=1; j<=5; j++)
        {printf("%c", s);}
        printf("\n");
    }
    
    return 0;
}

