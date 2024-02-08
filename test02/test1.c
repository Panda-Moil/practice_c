#include <stdio.h>
#include <math.h>
int main()
{
    int a=99;
    int b=88;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a%d b%d",a,b);
}