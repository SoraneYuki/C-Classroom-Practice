#include <stdio.h>

int main()
{

    int data[10];
    int flag[10] = {0};
    int i, j, k;
    int max = 0;

    for(i = 0; i < 10; i++)
    {

        scanf("%d", &data[i]);

    }

    for(i = 0; i < 10; i++)
    {

        for(j = 0; j < 10; j++)
        {

            if((data[max] < data[j]) && (flag[j] != -1))
            {

                max = j;

            }

        }

        printf(" %d", data[max]);

        flag[max] =- 1;
        k = 0;

        while(flag[k++] == -1);
        max = k-1;

    }

    printf("\n");

}