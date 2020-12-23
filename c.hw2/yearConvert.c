#include <stdio.h>

int main()
{

    int ad, roc;
    
    printf("Please input a year in AD: ");
    
    scanf("%d", &ad);
    
    roc = ad - 1911;
    
    printf("AD %d is ROC %d.\n", ad, roc);

}