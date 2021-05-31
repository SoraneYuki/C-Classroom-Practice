#include "StringBox.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **str;
int count = 0, Row = 10, Col = 20, nowsize = 10;

void start()
{

    int i;

    str = malloc(sizeof(char *) * Row);

    for(i = 0; i < Row; i++)
    {

        str[i] = malloc(2);

    }

}

void checksize()
{

    if(count >= (nowsize - 1))
    {

        int i;

        str = realloc(str, sizeof(char *) * (nowsize * 2));

        for(i = nowsize; i < (nowsize * 2); i++)
        {

            str[i] = malloc(2);

        }

        nowsize = nowsize * 2;

    }
    else if(count <= (nowsize / 3))
    {

        str = realloc(str, sizeof(char *) * (nowsize / 2));

        nowsize = nowsize / 2;

    }

}

int readALine(char strr[], int n)
{
    int ch, i = 0, size = 2;

    //strr = malloc(2);

    while (((ch = getchar()) != '\n') && (i < n))
    {
        if (!((i == 0) && (ch == ' ')))
        {
            
            // if((i + 1) >= size)
            // {

            //     //strr = realloc(strr, (size + 1));
            //     size++;

            // }
            
            strr[i++] = ch;
            
        }
    }
    strr[i] = '\0';
    str = realloc(str, sizeof(char *) * i + 1);
    return i;
}

void showHelp()
{
    printf("h for help\n");
    printf("i for inserting a new string into the box\n");
    printf("d for deleting an existing string from the box\n");
    printf("l for listing all strings in the box\n");
    printf("s for sorting strings according to the Lexicographic order\n");
    printf("q for quit\n");
}

void showInfoPrompt()
{
    printf("<command> ? ");
}

char getUserCommand()
{
    char c;
    scanf(" %c", &c);
    return c;
}

void insertion()
{

    getchar();
    checksize();
    readALine(str[count++], 80);

}

void showStrings()
{
    int i;
    if (count == 0)
    {
        printf("The box is empty!\n");
    }
    else
    {
        for (i = 0; i < count; i++)
        {
            printf("%d[%s]\n", i + 1, str[i]);
        }
    }
}

void deletion()
{
    int i, n;
    if (count == 0)
    {
        printf("Nothing to delete!\n");
    }
    else
    {
        showStrings();
        printf("Which one you want to delete? ");
        scanf(" %d", &n);
        if ((n > count) || (n <= 0))
        {
            printf("Out of range!\n");
        }
        else
        {
            count--;
            for (i = (n - 1); i < count; i++)
            {
                strcpy(str[i], str[i + 1]);
            }
            str[i][0] = '\0';
        }
    }
}

void sortingStrings()
{
    int i, j;
    char temp[80];
    for (i = 0; i < count - 1; i++)
    {
        for (j = 0; j < count - i - 1; j++)
        {
            if (strcmp(str[j], str[j + 1]) > 0)
            {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }
}