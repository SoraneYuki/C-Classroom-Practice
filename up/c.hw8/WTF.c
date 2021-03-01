#include <stdio.h>

#define PRINT_FONT_BLA  printf("\033[30m"); //黑色
#define PRINT_FONT_RED  printf("\033[31m"); //紅色
#define PRINT_FONT_GRE  printf("\033[32m"); //綠色
#define PRINT_FONT_YEL  printf("\033[33m"); //黃色
#define PRINT_FONT_BLU  printf("\033[34m"); //藍色
#define PRINT_FONT_PUR  printf("\033[35m"); //紫色
#define PRINT_FONT_CYA  printf("\033[36m"); //青色
#define PRINT_FONT_WHI  printf("\033[37m"); //白色

int main()
{

    while (1)
    {

        PRINT_FONT_RED
        printf("Arabic number? ");

        PRINT_FONT_GRE
        printf("Arabic number? ");

        PRINT_FONT_YEL
        printf("Arabic number? ");

        PRINT_FONT_BLU
        printf("Arabic number? ");

        PRINT_FONT_PUR
        printf("Arabic number? ");

        PRINT_FONT_CYA
        printf("Arabic number? ");

        PRINT_FONT_WHI
        printf("Arabic number? ");

    }

}