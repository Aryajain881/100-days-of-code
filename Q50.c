/* Q50: A program to print the following pattern:
*****
****
***
**
* */
#include<stdio.h>
int main()
{
    int i, j;
    char c;
    c = '*';

    for(i=1; i<=5; i++)
    { for(j=5; j>=i; j--)
      printf("%c", c);
      printf("\n");
    }
    return 0;
}