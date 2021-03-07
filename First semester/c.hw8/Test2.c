#include <stdio.h>

int main()
{

    int data[10];
    int i, j;
    int temp;
    int max = 0;

    for(i = 0; i < 10; i++)
    {

        scanf("%d", &data[i]);

    }

    for(i = 0; i < 9; i++)
    {

        for(j = i; j < 10; j++)
        {

            if(data[max] < data[j])
            {

                max = j;

            }

        }

        printf(" %d", data[max]);

        temp = data[max];
        data[max] = data[i];
        data[i] = temp;

    }

    printf(" %d\n", data[9]);

}