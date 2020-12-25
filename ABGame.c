#include <stdio.h>
#include <time.h>

int main()
{

    int answer[4];
    int box[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, p;

    srand(time(NULL));

    for(i = 0; i < 4; i++)
    {

        p = rand() % (10 - i);
        answer[i] = box[p];
        box[p] = box[10-i];

    }

    for(i = 0; i < 4; i++)
    {

        printf("%d", answer[i]);

    }

    printf("\n");

}