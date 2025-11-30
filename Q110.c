/*Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element 
in each sub-array of size k moving from left to right. Print the maximum elements for each window separated by spaces as 
output. 
*/
#include<stdio.h>
int main()
{
    int i, j, k, n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    if(n <= 0)
    { printf("Error.\nExiting...");
      return 0; }
    int arr[n];
    for(i=0; i<n; i++)
    { printf("Enter an integer: ");
      scanf("%d", &arr[i]); }
    printf("Enter the size of the sub-arrays: ");
    scanf("%d", &k);
    printf("The maximum element of each subarray is ");
    for(i=0; i<=n-k; i++)
    { for(j=i; j<k+i; j++)
    { if( arr[i] < arr[j])
    { arr[i] = arr[j]; }
    }
    printf("%d ", arr[i]);
    }
    return 0;
}