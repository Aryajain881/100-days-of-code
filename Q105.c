/*Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element 
is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element 
is not necessarily the element that is present most number of times. 
*/
#include<stdio.h>
int main()
{
    int i, j, n, x, majority, size=0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    if(n <= 0)
    { printf("Error.\nExiting...");
      return 0; }
    int nums[n];
    for(i=0; i<n; i++)
    { printf("Enter an integer: ");
      scanf("%d", &nums[i]); }
    printf("The first element that comes more than %d/2 times is ", n);
    for(i=0; i<n; i++)
    { j = nums[i];
     for(i=0; i<n; i++)
     { if(j == nums[i])
     { size++; 
      if( size > n/2)
      { majority = 1;
        x = j;
        break; }
      else
      { majority = -1;}
     } } 
    }
    if(majority == 1)
    { printf("%d", x); }
    else
    { printf("-1"); }
    return 0; 
}