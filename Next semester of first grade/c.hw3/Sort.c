#include <stdio.h>

void *sort(int *a, int *b, int *c)
{

    int i, j, temp;

    int data[3];

    data[0] = *a;
    data[1] = *b;
    data[2] = *c;

    for(i = 0; i < 2; i++)
    {

        for(j = 0; j < 2 - i; j++)
        {

            if(data[j] < data[j + 1])
            {

                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;

            }

        }

    }

    *a = data[0];
    *b = data[1];
    *c = data[2];

}

int main()
{

    int x, y, z;

    scanf(" %d %d %d", &x, &y, &z);
    sort(&x, &y, &z);
    printf("%d >= %d >= %d\n", x, y, z);

}