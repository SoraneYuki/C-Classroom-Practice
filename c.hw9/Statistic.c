#include <stdio.h>

int main()
{

    int data[10];
    int i, max = 0, min = 0;

    double alladd = 0, all;

    printf("Please input 10 numbers: ");

    for(i = 0; i < 10; i++)
    {

        scanf(" %d", &data[i]);

    }

    for(i = 0; i < 10; i++)
    {

        if(data[i] > max)
        {

            max = data[i];

        }

    }

    for(i = 0; i < 10; i++)
    {

        if(data[i] < min)
        {

            min = data[i];

        }

    }

    for(i = 0; i < 10; i++)
    {

        alladd = alladd + (float)data[i];

    }

    all = alladd / 10;

    printf("The maximal number is %d.\n", max);
    printf("The minimal number is %d.\n", min);
    printf("The average of these ten numbers is %.2f.\n", all);

}