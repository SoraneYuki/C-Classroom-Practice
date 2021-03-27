#include <stdio.h>
#include <string.h>

int main()
{

    char word[2000];
    char *test, *i;
    
    int size, wordsize, testsize;

    while(fgets(word, 1200, stdin) != '\0')
    {

        test = strstr(word, "NPTU");

        if(test != NULL)
        {

            char j[100] = {};

            strcpy(i, test + 4);

            wordsize = (int)strlen(word);
            testsize = (int)strlen(test);
            size = wordsize - testsize;

            strncpy(j, word, size);

            printf("%s", j);
            printf("National Pingtung University");
            printf("%s", i);

        }
        else
        {

            printf("%s", word);

        }

    }

    printf("\n");

}