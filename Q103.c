
#include <stdio.h>
int main()
{
    int n, i, totalSum = 0, leftSum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    if(n <= 0)
    { printf("Error.\nExiting...");
      return 0; }
    int arr[n];
    for(i=0; i<n; i++)
    { printf("Enter the elements of the array: ");
      scanf("%d", &arr[i]);
      totalSum += arr[i]; }
    for(i=0; i<n; i++)
    { if(leftSum == (totalSum - leftSum - arr[i])) 
    { printf("The pivot index is %d.\n", i);
      return 0; }
      leftSum += arr[i];
    }
    printf("The pivot index is -1.\n");
    return 0;
}