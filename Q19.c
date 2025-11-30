//Q19: Program to check whether a triangle is equilateral, isoceles or scalene based on it's side lengths
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the sides of the trianlge: ");
    scanf("%d %d %d", &a, &b, &c);

    if( a == b && b == c )
    printf("The triangle is equilateral.");
    else if( a == b || b == c)
    printf("The triangle is isoceles.");
    else
    printf("The triangle is scalene.");
     
    return 0;
}   