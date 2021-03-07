#include <stdio.h>

int main()
{

    int num, num2;

    printf("Please input an integer: ");
    scanf("%d", &num);
    
    printf("Decimal(%d)=Hexadecimal(%x).\n\n", num, num);
    
    printf("Please input an integer in octal: ");
    scanf("%o", &num2);
    
    printf("Octal(%o)=Hexadecimal(%x).\n", num2, num2);

}