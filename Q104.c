
#include<stdio.h>
int main()
{
    int n, i, total_sum=0, left_sum=0;
     printf("Enter a positive integer: ");
    scanf("%d", &n);
    if(n <= 0)
    { printf("Error.\nExiting...");
      return 0; }
      int arr[n];
    for(i=0; i<n; i++)
    { arr[i] = i+1;
      total_sum += arr[i]; }
    for(i=0; i<n; i++)
    { if(left_sum == (total_sum - left_sum - arr[i])) 
    { printf("The pivot index is %d.\n", arr[i]);
      return 0; }
      left_sum += arr[i]; 
    }
    printf("The pivot index is -1.\n"); 
    return 0; 
}