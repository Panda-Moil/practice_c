#include <stdio.h>
#include <math.h>

int main()
{
    // int a = 99;
    // int b = 88;
    // a = a + b;
    // b = a - b;
    // a = a - b;
    // printf("a%d b%d", a, b);
    //printf("%x",~(1<<4));
    // char a=0xb6;
    // if(a==0xb6)
    //     {printf("++%d",a);}
    //       {printf("--%d",a);}


    int a[5]={0};
    int b=0;
    int c=0;
    int d=0;
    int e=0;
    for(b=0;b<5;b++)
    {
        scanf("%d",&a[b]);
    }
    scanf("%d",&c);
    for(b=0;b<5;b++)
    {
        if(a[b]!=c)
        {
            a[d]=a[b];
            d++;
        }
    }
    for(;e<d;e++)
    {
        printf("%d",a[e]);
    }
}
//