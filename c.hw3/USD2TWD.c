#include <stdio.h>

int main()
{

    double x, y, z;

    printf("1 USD = ? TWD : ");
    scanf("%lf", &x);
    
    printf("How much USD dollar? ");
    scanf("%lf", &y);

    z = ((x * y) / 100) * 2.5;
    
    printf("You can get %lf TWD.\n", (x * y) - z);

}