#include <stdio.h>

int main ()
{

    int num, i, j, length;

    printf("Please input length of the square: ");

    scanf("%d", &num);

    length = (num * 2) - 1;

    for(i = 1; i <= num; i++)
    {

        if((i == 1) || (i == num))
        {
        
            for(j = 1; j <= length; j++)
            {

                if((j % 2) != 0)
                {

                    printf("*");

                }
                else
                {
                    
                    printf(" ");

                }

            }

            printf("\n");

        }
        else
        {
            
            for(j = 1; j <= length; j++)
            {

                if((j == 1) || (j == length))
                {

                    printf("*");

                }
                else
                {

                    printf(" ");

                }

            }

            printf("\n");

        }

    }    

}