//Q69: WAP to find the second largest element in an array.
#include<stdio.h>
int main()
{
    int i, j, n, l, sl, arr[100];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    { printf("Enter the integer: ");
      scanf("%d", &arr[i]); }
    l = arr[0];
    sl = arr[0];
    for(i=0; i<n; i++)
    { if(l < arr[i])
    {sl = l;
     l = arr[i];}
     else if(arr[i] > sl && arr[i] != l)
    {sl = arr[i];}
    }
    if(sl != l)
    printf("The second largest number is %d", sl);
    
    return 0;
}
