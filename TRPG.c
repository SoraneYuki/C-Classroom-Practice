#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    unsigned long long num1, num2, i, Ans = 0;

    srand(time(NULL));

    printf("d?:");
    scanf("%lld", &num1);

    printf("Max?:");
    scanf("%lld", &num2);

    for(i = 0; i < num1; i++)
    {

        Ans = Ans + (rand() % (num2 - 1) + 1);

    }

    printf("%lldd%lld=%lld\n", num1, num2, Ans);

    system("pause");
    return 0;

}