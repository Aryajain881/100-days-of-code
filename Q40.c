//Q40: A program to find the 1’s complement of a binary number and print it
#include <stdio.h>
int main() 
{
  int n, x, digit, y, num;

  printf("Enter a binary number: ");
  scanf("%d", &n);
  num = n;
  x = 0;
  y = 1;

  while (num != 0) 
  {
   digit = num % 10;

   if (digit == 0)
   x = x + 1 *  y;
   if (digit == 1)
   x = x + 0 *  y;

   num /= 10;
   y = y*10;
  } 

  printf("1's Complement: %d\n", x);

  return 0;
}
