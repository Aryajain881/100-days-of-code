/*Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the sub-
arrays of size k.
*/
#include<stdio.h>
int main()
{
    int i, j, k, n, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    if(n <= 0)
    { printf("Error.\nExiting...");
      return 0; }
    int arr[n], sum[n];
    for(i=0; i<n; i++)
    { printf("Enter an integer: ");
      scanf("%d", &arr[i]); }
    printf("Enter the size of the sub-arrays: ");
    scanf("%d", &k);
    for(i=0; i<=n-k; i++)
    { temp = 0;
      for(j=i; j<k+i; j++)
    { temp = arr[j] + temp;
      sum[i] = temp; }
    }
    int func = sum[0];
    for(i=0; i<=n-k; i++)  
    { if(func < sum[i])
    { func = sum[i]; } 
    }
    printf("The maximum sum of the subarrays is %d", func);
    return 0;
}