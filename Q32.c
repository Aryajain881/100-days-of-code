//Q32: Program to check if a number is a palindrome
#include<stdio.h>
int main()
{
    int n, r, s, t;
    printf("Enter the number: ");
    scanf("%d", &n);
    s = 0;
    t = n;
   
    for(; n != 0; n /= 10)
    {
      r = n % 10;
      s = s * 10 + r;
    }

    if(t == s)
    printf("The number is a palindrome.");
    else
    printf("The number is not a palindrome.");

    return 0;
    
}