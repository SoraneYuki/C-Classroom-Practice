#include <stdio.h>

int main()
{

    int i, ansmax = 0, continue_ans1 = 1, continue_ans2 = 1, continue_ans3 = 1, ans1_sure = 0, ans2_sure = 0, ans3_sure = 0;

    int ans_area[3];

    char user[10];
    char ans1[10] = {'0', '0', '2', '1', '8', '8', '1', '5', '3', '4'};
    char ans2[10] = {'0', '0', '5', '3', '0', '5', '0', '4', '1', '6'};
    char ans3[10] = {'0', '0', '8', '5', '1', '7', '4', '7', '7', '8'};

    printf("Please input your receipt number: ");

    for(i = 0; i < 10; i++)
    {

        scanf("%c", &user[i]);
    
    }

    for(i = 9; i > 1; i--)
    {

        if(continue_ans1 == 1)
        {

            if(user[i] == ans1[i])
            {

                ans1_sure++;

            }
            else
            {

                continue_ans1 = 0;

            }

        }

        if(continue_ans2 == 1)
        {

            if(user[i] == ans2[i])
            {

                ans2_sure++;

            }
            else
            {

                continue_ans2 = 0;

            }

        }

        if(continue_ans3 == 1)
        {

            if(user[i] == ans3[i])
            {

                ans3_sure++;

            }
            else
            {

                continue_ans3 = 0;

            }

        }

    }

    ans_area[0] = ans1_sure;
    ans_area[1] = ans2_sure;
    ans_area[2] = ans3_sure;

    for(i = 0; i < 3; i++)
    {

        if(ans_area[i] > ansmax)
        {

            ansmax = ans_area[i];

        }

    }

    if(ansmax < 3)
    {

        printf("Sorry, this number has drawn no prize.\n");

    }
    else
    {

        switch(ansmax)
        {

            case 3:

                printf("Congratulations! This number has drawn a prize of 200 (3 digits were matched).\n");
                break;

            case 4:

                printf("Congratulations! This number has drawn a prize of 1000 (4 digits were matched).\n");
                break;

            case 5:

                printf("Congratulations! This number has drawn a prize of 4000 (5 digits were matched).\n");
                break;

            case 6:

                printf("Congratulations! This number has drawn a prize of 10000 (6 digits were matched).\n");
                break;

            case 7:

                printf("Congratulations! This number has drawn a prize of 40000 (7 digits were matched).\n");
                break;

            case 8:

                printf("Congratulations! This number has drawn a prize of 200000 (8 digits were matched).\n");
                break;

        }

    }

}