#include <stdio.h>

int main()
{

    int num, ans = 1, i, canout = 0;

    while(canout == 0)
    {

        printf("N? ");
        scanf("%d", &num);

        if(num <= 0)
        {

            printf("Wrong Input! Try Again!\n");

        }
        else
        {

            canout = 1;

        }

    }

    for(i = 1; i <= num; i++)
    {

        ans = ans * i;

    }

    printf("%d! = %d\n", num, ans);

}