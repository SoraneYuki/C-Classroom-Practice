#include <stdio.h>

int main ()
{

    int num, i, j;
    
    printf("Please input lenght of the diamond: ");
    
    scanf("%d", &num);
    
    for(i = 1; i <= num; i++)
    {
    
        for(j = 1; j < (num - i + 1); j++)
        {
        
            printf(" ");
        
        }
    
        if(i != 1)
        {
        
            printf("*");
        
            for(j = 1; j < (i * 2 - 2); j++)
            {
        
                printf(" ");
        
            }
        
            printf("*");
            printf("\n");
            
        }
        else
        {
        
            printf("*\n");
        
        }
    
    }
    
    for(i = (num - 1); i > 0; i--)
    {
    
        for(j = 1; j < (num - i + 1); j++)
        {
        
            printf(" ");
        
        }
    
        if(i != 1)
        {
        
            printf("*");
        
            for(j = 1; j < (i * 2 - 2); j++)
            {
        
                printf(" ");
        
            }
        
            printf("*");
            printf("\n");
            
        }
        else
        {
        
            printf("*\n");
        
        }
    
    }

}