//Q41: A program to swap the first and last digit of a number
#include <stdio.h>
#include <math.h> // Required for pow() function

int main() {
    int num, f, l, s, digit, k;
    printf("Enter an integer: ");
    scanf("%d", &num);
    digit = 0;
    l = num % 10;
    k = num;
    while (k != 0) {
        k = k / 10;
        digit++;
    }
    f = num / (int)pow(10, digit - 1);

    s = num % (int)pow(10, digit - 1);
    s = s / 10;

    s = l * pow(10, digit - 1) + s * 10 + f;
    printf(" New number: %d\n", s);

    return 0;
}