//Q23: Program to calculate the library fine based on late days
#include<stdio.h>
int main()
{
    int i, l, f;
    printf("Late days: ");
    scanf("%d", &l);

    if(l <= 5)
    { f = l * 2;
      printf("Fine: %d", f);}
    else if(l > 5 && l <= 10)
    { f = l * 4;
      printf("Fine: %d", f);}
    else if(l > 10 && l <= 20)
    { f = l * 6;
      printf("Fine: %d", f);}
    else if(l > 20 && l <= 29)
    { f = l * 8;
      printf("Fine: %d", f);}    
    else
    printf("Membership cancelled.");
   
    return 0;
}