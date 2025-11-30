//Q4: Program to calculate area and circumference of a circle
#include<stdio.h>
int main()
{
    float r, area, circumference;
    printf("Enter the radius: ");
    scanf("%f", &r);
    circumference= 2*3.14*r;
    area= 3.14*3.14*r;
    printf("Area= %f\n", area);
    printf("Circumference= %f\n", circumference);
    return 0;
}