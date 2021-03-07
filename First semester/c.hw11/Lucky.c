#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define boolean int
#define true 1
#define false 0

int main()
{
    int card[52];
    char points[13]={'A','2','3','4','5','6','7','8','9','T','J','Q','K' };
    int i,p,temp;
    int suit, point;
    boolean quit=false;
    boolean washing=true;
    char cmd;
    int money=1000;
    int bet=100;
    int numCards=52;
    int current=0;
    int nownum = 7;
    
    unsigned long int loc; 
    loc=(unsigned long)&i;
    srand(loc);
    
    for(i=0;i<52;i++)
    {
        card[i]=i;
    }



    printf("-------------------------------\nPoker Game: Bigger or Smaller?!\n");
    printf("-------------------------------\nPress h for help.\n\n");    
    
    while(!quit)
    {
    
        if(washing)
        {
        
            for(i=0;i<52;i++)
            {
                p=rand()%52;
                temp=card[i];
                card[i]=card[p];
                card[p]=temp;
            }
            washing=false;
        }
    
        printf("[$%d][Bet %d] Cards(%d)\n", money, bet, 52-current); 
        printf("Bigger or Smaller than %d (b/s)?", nownum);
        scanf(" %c", &cmd);
        switch(cmd)
        {
            // case 'a':
            //         bet=money;
            //         break;
            case 'q':
                    quit=true;
                    break;
            case 'h':
                    //printf("a for all in\n");
                    printf("h for help\ni for increasing your bet\nd for decreasing your bet\n");
                    printf("b for guessing the card is bigger\n");
                    printf("s for guessing the card is smaller\n");
                    printf("w for re-washing the cards\nq for quit\n");
                    break;
            case 'i':
                    if(bet+100>money)
                        printf("No more money to bet!\n");
                    else
                        bet+=100;
                    break;
            case 'd':
                    if(bet-100<100)
                        printf("Minimum bet is 100!\n");
                    else
                        bet-=100;
                    break;
            case 'b':
            case 's':
                    printf("The card is ");
                    
                    suit=card[current]/13;
                    point=card[current]%13+1;
                    nownum = point;
        
                    switch(suit)
                    {
                        case 0: printf("\u2660"); break;
                        case 1: printf("\u2665"); break;
                        case 2: printf("\u2666"); break;
                        case 3: printf("\u2663"); break;
                    }
                    
                    printf("%c, You ", points[point-1]);

                    if(((cmd=='b')&&(point>=nownum))||((cmd=='s')&&(point<=nownum)))
                    {
                        printf("win!\n");
                        money+=bet;
                    }
                    else	
                    {
                        printf("lose!\n");
                        money-=bet;
                    }
                    current++;
                    break;
                case 'w':
                    washing=true;
                    current=0;
                    break;
                case 'c':
                    for(i=0;i<52;i++)
                    {
                        suit=card[i]/13;
                        point=card[i]%13+1;

                        switch(suit)
                        {
                            case 0: printf("\u2660"); break;
                            case 1: printf("\u2665"); break;
                            case 2: printf("\u2666"); break;
                            case 3: printf("\u2663"); break;
                        }
                        switch(point)
                        {
                            case  1: printf("A"); break;
                            case 11: printf("J"); break;
                            case 12: printf("Q"); break;
                            case 13: printf("K"); break;
                            case 10: printf("T"); break;
                            default: printf("%1d", point);
                        }
                        printf(" ");
                        if(i%13==12)
                            printf("\n");
                    }
                    break;
        }

                    
        
    }
    
    printf("Good Bye!\n");
    
}