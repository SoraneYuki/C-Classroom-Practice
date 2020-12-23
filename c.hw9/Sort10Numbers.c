#include <stdio.h>

int main()
{

    int data[10];
    int i, j, max = 0, temp;

    printf("Please input 10 numbers: ");

    for(i = 0; i < 10; i++)
    {

        scanf("%d", &data[i]);

    }

    for(i = 0; i < 10; i++)
    {

        max = i;

        for(j = i; j < 10; j++)
        {

            if(data[max] < data[j])
            {

                max = j;

            }

        }

        temp = data[max];
        data[max] = data[i];
        data[i] = temp;

    }

    for(i = 0; i < 10; i++)
    {

        printf("%d ", data[i]);

    }

    printf("\n");

}