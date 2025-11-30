//Q24: Program to calculate an electricity bill based on units consumption
#include<stdio.h>
int main()
{ 
    int e, b, tax;
    printf("Units consumed: ");
    scanf("%d", &e);

    if(e <= 100)
    { tax = 0;}
    else if(e > 100 && e <= 200)
    { tax = 100;} 
    else if(e > 200 && e <= 400)
    { tax = 250;}
    else
    { tax = 400;}

    b = e*5 + tax;
    printf("Bill: %d", b);

    return 0;
}