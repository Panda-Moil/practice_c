//将输入的值求和
#include <stdio.h>
#include <math.h>
int main()
{
    long a=0l,sum=0l;
    while(scanf("%ld",&a))
    {
        sum =a+sum;
    }
    printf("\n=%ld",sum);
}