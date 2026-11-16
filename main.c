
#include <stdio.h>
#include <math.h>

// ラジアンを度に変換する関数
double rad_to_deg(double rad)
{
    return rad * 180.0 / M_PI;
}

int main(void)
{
    double x;
    double rad;
    double degree;

    scanf("%lf", &x);

    if (x < 0)
    {
        printf("NG");
        return 0;
    }

    rad = atan(x);
    degree = rad_to_deg(rad);

    printf("%.2f", degree);

    return 0;
}
