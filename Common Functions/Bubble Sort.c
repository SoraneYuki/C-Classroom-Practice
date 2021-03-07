#include <stdio.h>

int main()
{

    int data[10];

    int temp, i, j;

    for(i = 0; i < 10; i++)
    {

        for(j = 0; j < 10 - i; j++)
        {

            if(data[j] > data[j + 1])
            {

                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;

            }

        }

    }

}