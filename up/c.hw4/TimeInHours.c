#include <stdio.h>

int main()
{

    float h, m, s;
    
    printf("Please input a time (HH:MM:SS): ");
    
    scanf("%2f%*c%2f%*c%2f", &h, &m, &s);
    
    printf("%02.0f:%02.0f:%02.0f = %8.5f hours\n", h, m, s, h + (m / 6 / 10) + (s / 36 / 100));
    
}