//Q22: Program to find profit and loss percentage for a given cost price and selling price
#include<stdio.h>
int main()
{
    float cp, sp, profit, loss;
    printf("Enter the cost price: ");
    scanf("%f", &cp);
    printf("Enter the selling price: ");
    scanf("%f", &sp); 
    profit= ( sp-cp ) / cp * 100;
    loss= ( cp-sp )/ cp * 100;
    if(sp > cp)
    printf("The profit percentage is %f", profit);
    else if(sp < cp)
    printf("The loss percentage is %f", loss);
    else 
    printf("No profit, No loss");
    return 0;
} 