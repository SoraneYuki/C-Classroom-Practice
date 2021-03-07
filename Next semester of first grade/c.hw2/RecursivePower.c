#include <stdio.h>

int rpower(int a, int b)
{

    int ans, i;

    if(b > 0)
    {

        ans = a;

        for(i = 0; i < (b - 1); i++)
        {

            ans = ans * a;

        }

        return ans;

    }
    else
    {

        return 1;

    }

}

int main()
{

    int a, b;

    printf("a=? ");
    scanf("%d", &a);
    printf("b=? ");
    scanf("%d", &b);
    printf("The %d-th power of %d is %d.\n", b, a, rpower(a, b));

}