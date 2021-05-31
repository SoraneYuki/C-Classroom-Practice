#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int num, *p;
    
    srand(time(NULL));

    num = rand() % 99;

    printf("%d\n", num);

    system("pause");
    return 0;

}