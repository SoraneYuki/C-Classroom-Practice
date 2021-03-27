#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int ans = 0, i;

    if(argc <= 1)
    {

        printf("No input data.\n");

    }
    else
    {

        for(i = 1; i < argc; i++)
        {

            ans = ans + atoi(argv[i]);

        }

        printf("Sum=%d.\n", ans);
    
    }

}