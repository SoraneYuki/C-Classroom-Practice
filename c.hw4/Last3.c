#include <stdio.h>

int main()
{

    int x;
    
    printf("請輸入統一發票號碼: ");
    
    scanf("%*c%*c%*c%*c%*c%*c%*c%3d", &x);
    
    printf("最後三碼為%03d\n", x);

}