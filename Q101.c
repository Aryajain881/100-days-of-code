/*Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the 
sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of 
first and last occurrence. Print -1, -1 if the target is not present. 
*/
#include<stdio.h>
int main()
{
    int  i, j, k, n, num, target1, target2;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    if(n <= 0)
    { printf("Error.\nExiting...");
      return 0; }
    int nums[n];
    for(i=0; i<n; i++)
    { printf("Enter an integer: ");
      scanf("%d", &nums[i]); }
    for(i=0; i<n; i++) 
    { for(j=0; j<n-i-1; j++) 
    { if(nums[j] > nums[j+1]) 
    { int temp = nums[j];
     nums[j] = nums[j+1];
     nums[j+1] = temp; } 
    } }
    printf("\nEnter a number whose first and last appearance you want to find: ");
    scanf("%d", &num);
    printf("The first and last appearance were at the index ");
    for(i=0; i<n; i++)
    { if(num == nums[i])
    { target1 = 1;
      break; }
      else
    { target1 = -1; }
    }
    for(k=n-1; k>=0; k--)
    { if(num == nums[k])
    { target2 = 1 ;
      break; }
      else
    { target2 = -1; }
    }
    if( target1 == 1 && target2 == 1)
    printf("%d %d", i, k);
    else if(target1 == -1 && target2 == -1)
    printf("-1 -1");
    return 0;
}