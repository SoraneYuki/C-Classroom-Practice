#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char word[2000];
    int i, max;

    while(fgets(word, 1200, stdin) != '\0')
    {

        i = 0;

        max = (int)strlen(word);

        while(i < max)
        {

            word[i] = toupper(word[i]);

            i++;

        }
        printf("%s", word);

    }

    printf("\n");

}