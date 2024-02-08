//判断输入的值是否约等于圆周率，误差为0.001
#include <stdio.h>
#include <math.h>
int main()
{
    double a = 0. ;
    const double pai=3.14159;
    scanf("%lf",&a);
    while(fabs(a-pai)>0.001)
    {
        printf("请重新输入");
        scanf("%lf",&a);
    }
    return 0;
}