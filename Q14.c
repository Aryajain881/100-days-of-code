//Q14.c: Program to check whether the inserted alphabet is vowel or consonant using if-else
#include<stdio.h>
int main()
{
    char a, e, i, o, u, A;
    printf("Enter an alphabet: ");
    scanf("%c", &A);

    if( A == 'a' || A == 'e' || A == 'i' || A == 'o' || A == 'u' )
    printf("The alphabet is a vowel.");
    else
    printf("The alphabet is consonant.");
    
    return 0;
}