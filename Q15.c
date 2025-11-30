//Q15: Program to check whether the input is an alphabet is lower_case, upper_case, special_character, digit
#include<stdio.h>
int main()
{
    char character;
    printf("Enter the character: ");
    scanf("%c", &character);

    if( character >= 'a' && character <= 'z')
    printf("The character is an lowercase.");
    else if( character >= 'A' && character <= 'Z')
    printf("The character is in uppercase.");
    else if( character >= '1' && character <= '9') 
    printf("The character is a digit.");
    else
    printf("The character is a special character.");
    return 0;
}