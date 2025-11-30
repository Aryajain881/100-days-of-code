//Q33: Write a program to check if a number is an Armstrong number.
#include<stdio.h>
int main()
{
    int i, n, r, s;
    printf("Enter the number: ");
    scanf("%d", &n);
    s = 0;

    for(i = n; n != 0; n /= 10)
    { r = n % 10;
      s = s + r*r*r; }
    if( i == s)
    printf("The number is an armstrong number.");
    else
    printf("The number is not an armstrong number.");
    
    return 0;
}
