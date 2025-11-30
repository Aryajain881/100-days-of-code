//Q6: Program to swap two varaibles using a third variable
#include<stdio.h>
int main()
{
    int a,b,swap;
    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);
    swap=a;
    a=b;
    b=swap;
    printf("After swap= %d %d\n",a,b);
    return 0;
}