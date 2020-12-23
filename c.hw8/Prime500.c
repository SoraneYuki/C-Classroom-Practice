#include <stdio.h>

int main()
{

    int canout = 0, num = 1, i, j = 0;

    while(canout == 0)
    {
    
        i = prime(num);

        if(i == 1)
        {

            printf("%d ", num);
            j++;

        }

        num++;

        if(j == 500)
        {

            canout = 1;

        }

    }

    printf("\n");

}

int prime(int num)
{

	int i;

	if(num == 1)
    {

		return 0;

	}
    else
    {

		for(i = 2; i < num; i++)
        {

			if((num % i) == 0)
            {

				return 0;

			}

		}

	}

	return 1;

}