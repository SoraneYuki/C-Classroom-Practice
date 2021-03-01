#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int i;

    srand(time(NULL));
    
    i = rand() % 10;
    
    if(i == 0)
    {
    
        i = i + 1;
    
    }
    
    printf("Throwing the dice.... %d!\n", i);

}