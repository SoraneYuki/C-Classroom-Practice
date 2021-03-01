#include <stdio.h>

int fibonacci(int num)
{

    int temp, a = 0, b = 1, i;

    for(i = 0; i < num; i++)
    {

        temp = a + b;
        a = b;
        b = temp;

    }

    return a;

}

int main()
{

    int i;

    printf("The first 10 Fibonacci numbers are ");

    for(i = 0; i < 10; i++)
    {

        printf(" %d", fibonacci(i));

        if(i < 8)
        {

            printf(",");

        }
        else if(i == 8)
        {
        
            printf(" and");

        }

    }

    printf(".\n");

}