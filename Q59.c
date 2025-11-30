//Q59: A program to count even and odd numbers in an array
#include<stdio.h>
int main()
{
    int i, n, arr[100], even_count, odd_count;
     printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    { printf("Enter the integer: ");
      scanf("%d", &arr[i]); }
    even_count = 0;
    odd_count = 0;
    
    for(i=0; i<n; i++)
    { if(arr[i] % 2 == 0)
      {even_count++; }
      else
      {odd_count++; }
    }
    printf("Number of even integers are %d.\n", even_count);
    printf("Number of odd integers are %d.\n", odd_count);

    return 0;
}
