#include <stdio.h>

int main()
{

    int y;

    unsigned long int x;
    
    printf("Please input an integer: ");
    
    scanf("%lu", &x);
    
    printf("The number %lu%n", x, &y);
    printf(" you have inputted has %d digits.\n", y - 11);

}