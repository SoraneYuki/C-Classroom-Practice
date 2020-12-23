#include <stdio.h>

int main()
{

    int num, canout = 0, i, now = 1, ans = 0;

    while(canout == 0)
    {

        printf("Please input a number: ");
        scanf("%d", &num);

        if(num < 2)
        {

            printf("Your input number must be higher than 2!\n");

        }
        else
        {

            canout = 1;

        }

    }

    for(i = 2; i <= num; i++)
    {

        printf("%d", i + 1);
        printf("x");
        printf("%d", now++);
        
        if(i != num)
        {

            printf("+");

        }

    }

    printf("=");

    now = 1;

    for(i = 2; i <= num; i++)
    {

        ans = ans + ((i + 1) * now);

        printf("%d", ((i + 1) * now++));
        
        if(i != num)
        {

            printf("+");

        }

    }

    printf("=%d\n", ans);

}