//Q25: Program to implement a basic calculator using switch-case for +, -, *, /, %.
#include<stdio.h>
int main()
{
    char o;
    int n, m, sum, difference, multiply, division, modulus;
    printf("Enter the integers and the operation: ");
    scanf("%d %d %c", &n, &m, &o);
 
    switch(o)
    {
        case '+':{ sum = n + m;
                    printf("The answer is %d.", sum);}
                break;
        case '-': { difference = n - m;
                    printf("The answer is %d.", difference);}
                break;
        case '/': { if(m != 0) {division = n / m;
                    printf("The answer is %d.", division);}
                    else
                    printf("Error.Division not possible.");}
                break;
        case '*': { multiply = n * m;
                    printf("The answer is %d.", multiply);}
                break;
        case '%': { if(m != 0) {modulus = n % m;
                    printf("The answer is %d.", modulus);}
                    else
                    printf("Error.Modulus not possible.");}
                break;
        }
        return 0;                               
}