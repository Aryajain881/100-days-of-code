/*Q106: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for 
each element of the array in order of their appearance in the array. Next greater element of an element in the array is 
the nearest element on the right which is greater than the current element. If there does not exist next greater of 
current element, then next greater element for current element is -1. 
N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.
*/
#include<stdio.h>
int main()
{
    int i, j, n, found=0;
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
    { found = -1;
      for(j=i+1; j<n; j++) 
      { if(arr[j] > arr[i])
      { found = arr[j]; 
        break; }
     }
     printf("%d ", found); }
    
    return 0;
}