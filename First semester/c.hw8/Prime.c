#include <stdio.h>

int main()
{

    int i, k;

    for(i = 1; i <= 1000; i++)
    {

        k = prime(i);

        if(k == 1)
        {
            
            printf("%d ", i);

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