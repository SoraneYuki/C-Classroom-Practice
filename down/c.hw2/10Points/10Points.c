#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int card[52];
int playercard[6];
int botcard[20];

void initialization()
{

    int i;

    srand(time(NULL));

    for(i = 0; i < 6; i++)
    {

        playercard[i] = -1;

    }

    for(i = 0; i < 20; i++)
    {

        botcard[i] = -1;

    }

    for(i = 1; i <= 52; i++)
    {

        card[(i - 1)] = i;

    }

    washcard();

}

void washcard()
{

    int i, j, temp;
  
    for(i = 0; i < 52; i++)
    {

        j = rand()%52;
        temp = card[i];
        card[i] = card[j];
        card[j] = temp;

    }

}

int main()
{

    initialization();

}