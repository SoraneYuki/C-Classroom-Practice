#include <stdio.h>

int main()
{

    float p, pi = 3.14;
    
    printf("請輸入圓半徑: ");
    scanf("%f", &p);
    
    printf("圓面積為%f平方公分\n", p * p * pi);

}