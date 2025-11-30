//Q10: Program to input time in seconds and convert it to Hours:Minutes:Seconds format
#include<stdio.h>
int main()
{
    int hours, minutes, seconds, x, y, z;
    printf("Input the time in seconds: ");
    scanf("%d", &x);
    hours = x/3600;
    y = x%3600;
    minutes = y/60;
    z = minutes%60;
    seconds= z;
    printf("Time: %d:%d:%d", hours, minutes, seconds);
    return 0;
}