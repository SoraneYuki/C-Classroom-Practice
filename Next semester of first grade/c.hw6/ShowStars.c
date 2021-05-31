#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void show(int space, int star)
{

    char *displayspace, *displaystar;

    displayspace = calloc(space, 1);
    displaystar = calloc(star, 1);

    memset(displayspace, 32, space);
    memset(displaystar, 42, star);

    printf("%s%s\n", displayspace, displaystar);

    free(displayspace);
    free(displaystar);

}

int main()
{

    int i, j;

    for(i = 5, j = 1; i >= 0; i--, j += 2)
        show(i, j);

}