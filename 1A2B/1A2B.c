// #include <stdio.h>
// #include <stdlib.h>

#include "mydefs.h"

int answer[4];
int guess[4];

int A = 0, B = 0;

void printHeader()
{

    printf("+---------------+\n");
    printf("|   1A2B Game   |\n");
    printf("+---------------+\n");

}

void generateAnswer()
{

    int i, p;

    int box[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    srand((unsigned int)&p);

    for(i = 0; i < 4; i++)
    {

        p = rand() % (10 - i);
        answer[i] = box[p];
        box[p] = box[9 - i];

    }

}

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

int main()
{

    int i, j, k, cnt = 1;
    boolean quit = false;
    boolean dup = false;

    printHeader();

    generateAnswer();

    printAnswer();

    while(!quit)
    {

        do
        {
            
            dup = false;
            printf("Input a guess (#%d):", cnt);
            getUserGuess();
            dup = checkDuplicate();

        }while(dup);

        cnt++;

        evaluateGuess();

        printf("--->%dA%dB\n", A, B);

        if(A == 4)
        {

            printf("You Win!\n");
            quit = true;

        }

    }

}