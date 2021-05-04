#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define boolean char
#define true 1
#define false 0

typedef enum
{

    Black = 49,
    White = 48,
    None = 0

} Player;

char chess[19][19]; //Mirror

boolean CheckHaveRowLine(int i, int j, int N, Player player)
{

    int count = 0;
    int x;

    if(j <= (19 - N))
    {

        for(x = 0; x < N; x++)
        {

            if(chess[i][j + x] == player)
            {

                count++;

            }

        }

        if(count == N)
        {

            return true;

        }
        else
        {

            return false;

        }

    }

    return false;

}

boolean CheckHaveColumnLine(int i, int j, int N, Player player)
{

    int count = 0;
    int x;

    if(i <= (19 - N))
    {

        for(x = 0; x < N; x++)
        {

            if(chess[i + x][j] == player)
            {

                count++;

            }

        }

        if(count == N)
        {

            return true;

        }
        else
        {

            return false;

        }

    }

    return false;

}

int main(int argc, char *argv[])
{

    int i, j, k = 0, quit = 0, now, X, Y;

    int outchess[361][2];

    boolean Found = false;

    Player me;
    Player enemy;

    srand((unsigned long) &quit);

    if(strcpy(argv[1], "Black") == 0)
    {

        me = Black;
        enemy = White;

    }
    else
    {

        me = White;
        enemy = Black;

    }

    for(i = 0; i < 19; i++)
    {

        for(j = 0; j < 19; j++)
        {

            scanf(" %c", &chess[i][j]);

            if((chess[i][j] == '.') && (chess[i][j] != '0') && (chess[i][j] != '1'))
            {

                outchess[k][0] = i;
                outchess[k][1] = j;

                k++;

            }

        }

    }

    for(i = 0; i < 19; i++)
    {

        for(j = 0; j < 19; j++)
        {

            if(CheckHaveRowLine(i, j, 4, me) && (Found == false))
            {

                if(chess[i][j - 1] == '.')
                {

                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j - 1], i + 1);
                    Found = true;

                }
                else if(chess[i][j + 4] == '.')
                {

                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j + 4], i + 1);
                    Found = true;

                }

            }

            if(CheckHaveRowLine(i, j, 4, enemy) && (Found == false))
            {

                if(chess[i][j - 1] == '.')
                {

                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j - 1], i + 1);
                    Found = true;

                }
                else if(chess[i][j + 4] == '.')
                {

                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j + 4], i + 1);
                    Found = true;

                }

            }

            if(CheckHaveColumnLine(i, j, 4, me) && (Found == false))
            {

                if(chess[i - 1][j] == '.')
                {

                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j], i);
                    Found = true;

                }
                else if(chess[i + 4][j] == '.')
                {

                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j], i + 5);
                    Found = true;

                }

            }

            if(CheckHaveColumnLine(i, j, 4, enemy) && (Found == false))
            {

                if(chess[i - 1][j] == '.')
                {

                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j], i);
                    Found = true;

                }
                else if(chess[i + 4][j] == '.')
                {

                    printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[j], i + 5);
                    Found = true;

                }

            }

        }

    }

    if(Found == false)
    {

        now = rand() % (k - 1);

        Y = outchess[now][0];
        X = outchess[now][1];

        printf("%c, %d\n", "ABCDEFGHIJKLMNOPQRS"[X], Y + 1);

    }
    
}