//Q9: Program to calculate simple interest and compound interest
#include<stdio.h>
#include<math.h>
int main()
{
    int principle, time;
    float compound_interest, simple_interest, rate;
    printf("Input the principle in rupees: ");
    scanf("%d", &principle);
    printf("Input the time in years: ");
    scanf("%d", &time);
    printf("Input the rate: ");
    scanf("%f", &rate);
    simple_interest= (principle * rate * time)/100;
    compound_interest= principle * (pow((1+(rate/100)), time)-1);
    printf("Simple interest= %f\n", simple_interest);    
    printf("Compound interest= %f\n", compound_interest);
    return 0;
}