#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int card[52];

int playercard[5];
int playerhavacard = 0;
int playerexplosion = 0;
int playernum = 0;

int botcard[20];
int bothavacard = 0;
int botexplosion = 0;
int botnum = 0;

int firstround = 1;
int playerround = 1;
int botround = 0;
int nowcard = 0;
int whowin = 2;

char points[13] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};

void washcard()
{

    int i, j, temp;
  
    for(i = 0; i < 52; i++)
    {

        j = rand() % 52;
        temp = card[i];
        card[i] = card[j];
        card[j] = temp;

    }

}

void addcard(int add[], int where)
{

    add[where] = card[nowcard];
    nowcard++;

}

void initialization()
{

    int i;

    playerhavacard = 0;
    playerexplosion = 0;
    playernum = 0;

    bothavacard = 0;
    botexplosion = 0;
    botnum = 0;

    firstround = 1;
    playerround = 1;
    botround = 0;
    nowcard = 0;
    whowin = 2;

    srand(time(NULL));

    for(i = 0; i < 5; i++)
    {

        playercard[i] = -1;

    }

    for(i = 0; i < 20; i++)
    {

        botcard[i] = -1;

    }

    for(i = 0; i < 52; i++)
    {

        card[i] = i;

    }

    washcard();

    addcard(playercard, playerhavacard);
    playerhavacard++;

    addcard(botcard, bothavacard);
    bothavacard++;

}

void playernumadd()
{

    int i;

    playernum = 0;

    for(i = 0; i < 5; i++)
    {

        if(playercard[i] != -1)
        {

            if(((playercard[i] % 13) == 10) || ((playercard[i] % 13) == 11) || ((playercard[i] % 13) == 12))
            {

                playernum = playernum + 5;

            }
            else
            {

                playernum = playernum + (((playercard[i] % 13) + 1) * 10);

            }

        }

    }

    if(playernum > 105)
    {

        playerexplosion = 1;

    }

}

void botnumadd()
{

    int i;

    botnum = 0;

    for(i = 0; i < 20; i++)
    {

        if(botcard[i] != -1)
        {

            if(((botcard[i] % 13) == 10) || ((botcard[i] % 13) == 11) || ((botcard[i] % 13) == 12))
            {

                botnum = botnum + 5;

            }
            else
            {

                botnum = botnum + (((botcard[i] % 13) + 1) * 10);

            }

        }

    }

    if(botnum > 105)
    {

        botexplosion = 1;

    }

}

void showplayercard()
{

    int i;

    printf("Player: ");

    for(i = 0; i < 5; i++)
    {

        if(playercard[i] == -1)
        {

            printf("");

        }
        else
        {

            switch(playercard[i] / 13)
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

            printf("%c ", points[playercard[i] % 13]);

        }

    }

    printf("\n");

}

void showbotcard()
{

    int i;

    if(firstround == 1)
    {

        printf("Bot: ");
        printf("?\n");
        firstround = 0;

    }
    else if(playerround == 0)
    {

        printf("Bot: ");

        for(i = 0; i < 20; i++)
        {

            if(botcard[i] == -1)
            {

                printf("");

            }
            else
            {

                switch(botcard[i] / 13)
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

                printf("%c ", points[botcard[i] % 13]);

            }

        }

        printf("\n");

    }

}

int main()
{

    int run = 1, startgame = 0, continuegame = 0;
    char userchoose;

    while(run == 1)
    {

        char sg;

        initialization();

        if(continuegame == 0)
        {

            printf("\n+---------------+\n");
            printf("|  10.5Points!  |\n");
            printf("+---------------+\n\n");

            printf("Start Game? (Y/N) ");
            scanf(" %c", &sg);

            switch(sg)
            {

                case 'Y':
                case 'y':

                    startgame = 1;
                    printf("\n");
                    break;

                case 'N':
                case 'n':

                    startgame = 0;
                    run = 0;
                    break;

            }

        }
        else
        {

            continuegame = 0;
            startgame = 1;

        }

        if(startgame == 0)
        {

            break;

        }

        printf("Now is Player round.\n\n");

        while(startgame == 1 && playerround == 1)
        {

            char user;

            playernumadd();

            showplayercard();
            showbotcard();

            if(playerexplosion == 1)
            {

                whowin = 0;
                playerround == 0;
                break;

            }

            playernumadd();

            if(playernum == 105)
            {

                showbotcard();
                whowin = 1;
                break;

            }

            printf("Add cards? (Y/N) ");
            scanf(" %c", &user);

            switch(user)
            {

                case 'Y':
                case 'y':

                    addcard(playercard, playerhavacard);
                    playerhavacard++;
                    break;

                case 'N':
                case 'n':

                    playerround = 0;
                    printf("\nNow is Bot round.\n\n");
                    break;

            }

            if((playerhavacard == 4) && (playernum <= 105))
            {

                whowin = 1;

            }

        }

        botround = 1;

        while((startgame == 1) && (playerround == 0) && (whowin == 2) && (botround == 1))
        {

            int choose;

            showbotcard();
            botnumadd();

            if(botexplosion == 1)
            {

                whowin = 1;
                botround = 0;
                break;

            }
            else if((botnum <= playernum) && (botnum < 105) && (botexplosion == 0))
            {

                choose = rand() % 3;

                if((choose == 1) || (choose == 2))
                {

                    addcard(botcard, bothavacard);
                    bothavacard++;
                    printf("I add a cards...\n");

                }
                else
                {

                    printf("I don't add anymore.\n");
                    showbotcard();
                    botround = 0;

                }

            }
            else if((botnum < 105) && (botexplosion == 0))
            {

                choose = rand() % 2;

                if(choose == 1)
                {

                    addcard(botcard, bothavacard);
                    bothavacard++;
                    printf("Look like very close...\n");
                    printf("So i add a cards...\n");

                }
                else
                {

                    printf("I don't add anymore.\n");
                    showbotcard();
                    botround = 0;

                }

            }
            else if(botnum == 105)
            {
            
                botround = 0;

            }

        }

        if(whowin == 2)
        {

            if(botnum > playernum)
            {

                whowin = 0;

            }
            else if(botnum < playernum)
            {

                whowin = 1;

            }

        }

        if(whowin == 0)
        {

            printf("\n");
            printf("Bot Win!!!\n\n");

            startgame = 0;

        }
        else if(whowin == 1)
        {
        
            printf("\n");
            printf("Player Win!!!\n\n");

            startgame = 0;

        }
        else if(playernum == botnum)
        {

            printf("\n");
            printf("Bot Win!!!\n\n");

            startgame = 0;

        }

        printf("Restart Game? (Y/N) ");
        scanf(" %c", &userchoose);

        switch(userchoose)
        {

            case 'Y':
            case 'y':

                run = 1;
                continuegame = 1;
                printf("\n");
                break;

            case 'N':
            case 'n':

                run = 0;
                break;

        }
    
    }

}