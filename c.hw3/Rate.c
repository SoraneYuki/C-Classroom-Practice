#include <stdio.h>

int main()
{

    float d, t;

    printf("請輸入距離: ");
    scanf("%f", &d);
    
    printf("請輸入時間: ");
    scanf("%f", &t);
    
    printf("速率為%f公尺/分鐘\n", d / t);

}