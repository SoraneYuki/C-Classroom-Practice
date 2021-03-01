#include <stdio.h>
#include <math.h>

int main()
{

    double x, y, z;

    printf("請輸入直角三角形邊長: ");
    scanf("%lf %lf", &x, &y);
    
    z = sqrt(x * x + y * y);
    
    printf("斜邊長為%lf公尺\n", z);

}