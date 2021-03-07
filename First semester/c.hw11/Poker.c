#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int poker[52];
    int i, j, temp;

    char displaypoker[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};

    srand(time(NULL));

    for(i = 0; i < 52; i++)
    {

        poker[i] = i;

    }

    for(i = 0; i < 52; i++)
    {

        j = rand() % 52;
        temp = poker[i];
        poker[i] = poker[j];
        poker[j] = temp;

    }

    for(i = 0; i < 13; i++)
    {

        switch(poker[i] / 13)
        {

            case 0:

                printf("\u2660");
                break;

            case 1:

                printf("\u2665");
                break;

            case 2:

                printf("\u2666");
                break;

            case 3:

                printf("\u2663");
                break;

        }

        printf("%c ", displaypoker[poker[i] % 13]);
    
    }

    printf("\n");

    for(i = 13; i < 26; i++)
    {

        switch(poker[i] / 13)
        {

            case 0:

                printf("\u2660");
                break;

            case 1:

                printf("\u2665");
                break;

            case 2:

                printf("\u2666");
                break;

            case 3:

                printf("\u2663");
                break;

        }

        printf("%c ", displaypoker[poker[i] % 13]);
    
    }

    printf("\n");

    for(i = 26; i < 39; i++)
    {

        switch(poker[i] / 13)
        {

            case 0:

                printf("\u2660");
                break;

            case 1:

                printf("\u2665");
                break;

            case 2:

                printf("\u2666");
                break;

            case 3:

                printf("\u2663");
                break;

        }

        printf("%c ", displaypoker[poker[i] % 13]);
    
    }

    printf("\n");

    for(i = 39; i < 52; i++)
    {

        switch(poker[i] / 13)
        {

            case 0:

                printf("\u2660");
                break;

            case 1:

                printf("\u2665");
                break;

            case 2:

                printf("\u2666");
                break;

            case 3:

                printf("\u2663");
                break;

        }

        printf("%c ", displaypoker[poker[i] % 13]);
    
    }

    printf("\n");

}