/*Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest 
element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an 
element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first 
occurrence.
*/
#include<stdio.h>
int main()
{
    int i, j, k, n, x, z, num, ceil;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    if(n <= 0)
    { printf("Error.\nExiting...");
      return 0; }
    int arr[n];
    for(i=0; i<n; i++)
    { printf("Enter an integer: ");
      scanf("%d", &arr[i]); }
    
    for(i=0; i<n; i++)
    { for(j=0; j<n-i-1; j++)
    { if(arr[j] > arr[j+1])
    { int temp = arr[j];
      arr[j] = arr[j+1];
      arr[j+1] = temp; }
    } }
    ceil = 0;
    x = 0;
    printf("\nEnter an integer: ");
    scanf("%d", &num);
    for(i=0; i<n; i++)
    { if(num < arr[i])
    { ceil++ ;
      break; }
      else if(num == arr[i])
    { printf("%d", i);
      return 0; }
    }
    if(ceil == 1)
    { printf("%d", i); }
    else if(ceil == 0)
    { printf("-1"); }
    return 0;
}