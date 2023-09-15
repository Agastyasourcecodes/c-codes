#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i = 0;
    char name[100];
    static int win = 0;
    static int draw = 0;
    static int loose = 0;
    int n;
    printf("Paper=0, Rock=1, Scissors=2\n");
    printf("ENTER YOUR NAME\n");
    scanf("%s", &name);
    while (i < 3)
    {
        srand(time(NULL));
        int s = rand() % 3;
        printf("%s TURN\n", name);
        scanf("%d", &n);
        printf("%s : %d\n", name, n);
        printf("PLAYER 2 TURN\n");
        printf("COMPUTER%d\n", s);
        if (n == s)
        {
            printf("MATCH DRAWN AND GET ) POINT\n");
            draw++;
        }
        else if (n == 0 && s == 1 || n == 1 && s == 2 && s == 0)
        {
            printf("%sWIN THE GAME AND GET 1 POINT\n", name);
            win++;
        }
        else
        {
            printf("COMPUTER WON THE GAME AND GOT 1 POINT\n");
            loose++;
        }
        i++;
    }
    printf("\n\n");
    if (win == 1 && draw == 1 && loose == 1 || draw == 3)
    {
        printf("THIS GAME IS DRAWN PLS TRY AGAIN");
    }
    else if (win == 2 || win == 1 && draw == 2)
    {
        printf("CONGRATULATIONS,YOU WON THIS GAME WITH TOAL PTS%d\n");
    }
    else
    {
        printf("SUCKER U LOOSE HAHA\n");
    }

    return 0;
}