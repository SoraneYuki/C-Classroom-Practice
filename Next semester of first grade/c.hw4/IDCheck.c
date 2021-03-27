#include <stdio.h>

int main()
{

    char L;

    int num[9];
    int i, one, num1, num10, ans;

    scanf("%[A-Z]c", &L);
    
    for(i = 0; i < 9; i++)
    {

        scanf("%1d", &num[i]);

    }

    one = L - 55;

    switch(one)
    {

        case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17:

            break;

        case 18:

            one = 34;
            break;

        case 19: case 20: case 21: case 22: case 23:

            one = one - 1;
            break;

        case 24:

            one = 35;
            break;

        case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 32: case 33: case 34: case 35:

            one = one - 2;
            break;

    }

    num10 = one / 10;
    num1 = one % 10;

    ans = num10 + (num1 * 9) + (num[0] * 8) + (num[1] * 7) + (num[2] * 6) + (num[3] * 5) + (num[4] * 4) + (num[5] * 3) + (num[6] * 2) + num[7] + num[8];

    if(ans % 10 == 0)
    {

        printf("Yes\n");

    }
    else
    {

        printf("No\n");

    }

}