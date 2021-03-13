#include <stdio.h>

int *min(int *a, int *b)
{

    if(*a > *b)
    {

        return b;

    }
    else
    {

        return a;

    }

}

int main()
{

    int x, y, *p;

    scanf(" %d %d", &x, &y);

    p = min(&x, &y);

    printf("The minimum of %d and %d is %d\n", x, y, *p);

}