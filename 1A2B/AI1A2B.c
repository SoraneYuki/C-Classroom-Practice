// #include <stdio.h>
// #include <stdlib.h>

#include "mydefs.h"

int solspace[5040][4];

int answer[4];
int guess[4];

int A = 0, B = 0, solsize = 0;

// void printHeader()
// {

//     printf("+---------------+\n");
//     printf("|   1A2B Game   |\n");
//     printf("+---------------+\n");

// }

// void generateAnswer()
// {

//     int i, p;
//     int box[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//     srand((unsigned int)&p);

//     for(i = 0; i < 4; i++)
//     {

//         p = rand() % (10 - i);
//         answer[i] = box[p];
//         box[p] = box[9 - i];

//     }

// }

void printAnswer()
{

    printf("[%d%d%d%d]\n", answer[0], answer[1], answer[2], answer[3]);

}

void getUserGuess()
{

    int i;
    char temp[4];
    scanf(" %c%c%c%c", &temp[0], &temp[1], &temp[2], &temp[3]);

    for(i = 0; i < 4; i++)
    {

        guess[i] = temp[i] - '0';

    }

}

boolean checkDuplicate()
{

    int i, j;

    for(i = 0; i < 3; i++)
    {

        for(j = i + 1; j <= 3; j++)
        {

            if(guess[i] == guess[j])
            {

                printf("Error! Dupliated!\n");
                return true;

            }

        }

    }

    return false;

}

void evaluateGuess()
{

    int i, j;

    A = 0;
    B = 0;

    for(i = 0; i < 4; i++)
    {

        if(guess[i] == answer[i])
        {

            A++;

        }

    }

    for(i = 0; i < 4; i++)
    {

        for(j = 0; j < 4; j++)
        {

            if((i != j) && (guess[i] == answer[j]))
            {

                B++;

            }

        }

    }

}

void generateSolSpace()
{

    int i, j, k, l, p = 1;

    for(i = 0; i < 10; i++)
    {

        for(j = 0; j < 10; j++)
        {

            for(k = 0; k < 10; k++)
            {

                for(l = 0; l < 10; l++)
                {

                    if((i != j) && (i != k) && (i!= l) && (j != k) && (j != l) && (k != l))
                    {

                        solspace[p][0] = i;
                        solspace[p][1] = j;
                        solspace[p][2] = k;
                        solspace[p][3] = l;

                        //printf("%d[%d%d%d%d]\n", p, solspace[p][0], solspace[p][1], solspace[p][2], solspace[p][3]);

                        p++;

                    }

                }

            }

        }

    }

    solsize = p;

}

void printAGuess(int i)
{

    printf("My guess is [%d%d%d%d]\n", solspace[i][0], solspace[i][1], solspace[i][2], solspace[i][3]);

}

void reduceSolSpace(int p)
{

    int i, a, b, x, y, size = 0;
    int temp[5040][4];

    for(i = 0; i < solsize; i++)
    {

        a = 0;
        b = 0;

        for(x = 0; x < 4; x++)
        {

            if(solspace[i][x] == solspace[p][x])
            {

                a++;

            }

        }

        for(x = 0; x < 4; x++)
        {

            for(y = 0; y < 4; y++)
            {

                if((x != y) && (solspace[i][x] == solspace[p][y]))
                {

                    b++;

                }

            }

        }

        if((a == A) && (b == B))
        {

            temp[size][0] = solspace[i][0];
            temp[size][1] = solspace[i][1];
            temp[size][2] = solspace[i][2];
            temp[size][3] = solspace[i][3];

            size++;

        }

    }

    for(i = 0; i < size; i++)
    {

        solspace[i][0] = temp[i][0];
        solspace[i][1] = temp[i][1];
        solspace[i][2] = temp[i][2];
        solspace[i][3] = temp[i][3];

        printf("%d%d%d%d\n", solspace[i][0], solspace[i][1], solspace[i][2], solspace[i][3]);

    }

    solsize = size;
    printf("solsize = %d\n", solsize);

}

int main()
{

    int p, cnt = 1;
    boolean quit = false;
    srand((unsigned int) &p);
    generateSolSpace();

    while(!quit)
    {

        p = rand()%solsize;
        printf("(#%d)", cnt);
        printAGuess(p);
        printf("--->?");
        scanf("%dA%dB", &A, &B);

        if(A == 4)
        {

            printf("I Win!!!\n");
            quit = true;

        }

        reduceSolSpace(p);
        cnt++;

    }

}