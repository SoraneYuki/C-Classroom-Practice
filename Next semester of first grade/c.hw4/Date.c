#include <stdio.h>

int main()
{

    int y, m, d;

    char *MMdisplay[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    printf("Date (yyyy/mm/dd)? ");

    scanf("%4d/%2d/%2d", &y, &m, &d);

    printf("The date is %s %d", MMdisplay[m - 1], d);

    switch(d)
    {

        case 1:
        case 21:
        case 31:

            printf("st, %d.\n", y);
            break;

        case 2:
        case 22:

            printf("nd, %d.\n", y);
            break;

        case 3:
        case 23:

            printf("rd, %d.\n", y);
            break;

        default:

            printf("th, %d.\n", y);
            break;

    }

}