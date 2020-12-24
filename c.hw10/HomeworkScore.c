#include <stdio.h>

#define StuNum 50

int main()
{

    int i, j, k, cheat = 0, lack = 0;

    int hwscore[StuNum][9];

    float temp0, temp1;

    float sum[StuNum] = {0.0};
    float ans[StuNum][2];

    for(i = 0; i < StuNum; i++)
    {

        scanf("%2d %d:%d:%d:%d:%d:%d:%d:%d", &hwscore[i][0], &hwscore[i][1], &hwscore[i][2], &hwscore[i][3], &hwscore[i][4], &hwscore[i][5], &hwscore[i][6], &hwscore[i][7], &hwscore[i][8]);

    }

    for(i = 0; i < StuNum; i++)
    {

        for(j = 1; j < 9; j++)
        {

            if(hwscore[i][j] == -1)
            {

                lack++;

            }

            if(hwscore[i][j] == -2)
            {

                cheat++;

            }

            if(hwscore[i][j] >= 0)
            {

                sum[i] = sum[i] + ((float)hwscore[i][j]);

            }

        }

        sum[i] = sum[i] / 8;

        if(lack >= 2)
        {

            sum[i] = sum[i] * 0.8;
            lack = 0;

        }

        if(cheat >= 1)
        {

            sum[i] = sum[i] - (cheat * 20);
            cheat = 0;

        }

        if(sum[i] < 0)
        {

            sum[i] = 0;

        }

        ans[i][0] = (float)hwscore[i][0];
        ans[i][1] = sum[i];

    }

    for(i = 0; i < StuNum - 1; i++)
    {

        for(j = 0; j < (StuNum - i - 1); j++)
        {

            if(ans[j][1] > ans[j + 1][1])
            {

                temp0 = ans[j][0];
                temp1 = ans[j][1];
                ans[j][0] = ans[j + 1][0];
                ans[j][1] = ans[j + 1][1];
                ans[j + 1][0] = temp0;
                ans[j + 1][1] = temp1;

            }

        }

    }

    for(i = 0; i < StuNum - 1; i++)
    {

        for(j = 0; j < (StuNum - i - 1); j++)
        {

            if((ans[j][0] > ans[j + 1][0]) && (ans[j][1] == ans[j + 1][1]))
            {

                temp0 = ans[j][0];
                temp1 = ans[j][1];
                ans[j][0] = ans[j + 1][0];
                ans[j][1] = ans[j + 1][1];
                ans[j + 1][0] = temp0;
                ans[j + 1][1] = temp1;

            }

        }

    }

    printf("No.\tScore\n");

    for(i = 0; i < StuNum; i++)
    {

        printf("%2.0f\t%6.2f\n", ans[i][0], ans[i][1]);

    }

}