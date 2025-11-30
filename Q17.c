//Q17: Program to find the roots of a quadratic equation and categorize them
#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, d, x1, x2;
    //A normal quadratic equation is ax^2+bx+c = 0 and to find the roots we need to find the value of a, b, c
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);

    d = (b*b) - 4*a*c;
    x1 = (-b + sqrt(d))/(2*a);
    x2 = (-b - sqrt(d))/(2*a);

    if( d > 0)
    { printf("The roots are real and different: %d %d\n", x1, x2);}
    else if( d == 0)
    { printf("The roots are real and equal: %d %d\n", x1, x2);}
    else
    { printf("The roots are imaginary.\n");}
}