// in progress
#include<stdio.h>
int main()
{
    int i, j, k, n, x;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    if(n <= 0)
    { printf("Error.\nExiting...");
      return 0; }
    int nums[n], answers[n];
    for(i=0; i<n; i++)
    { printf("Enter an integer: ");
      scanf("%d", &nums[i]); }
    for(i=0; i<n; i++)
    { int product = 1;
            
    }
    for(i=0; i<n; i++)
    { printf("%d ", answers[i]); }
    return 0;
}