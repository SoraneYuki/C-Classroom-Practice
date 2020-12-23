#include <stdio.h>

int main()
{

    int num;

    printf("Please input a two-digit number (10-99): ");
    scanf("%d", &num);
    
    printf("The reversed number is %d.\n", (num / 10) + ((num % 10) * 10));

}