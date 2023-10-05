#include <stdio.h>
#include<stdlib.h>

void board();
int check();

char boardnum[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

int main()
{
    int a, player1 = 1;
    char xo;
    char p1name[20], p2name[20];

    // Player Name input
    printf("Enter player 1 Name : ");
    scanf("%s", p1name);
    printf("Enter player 2 Name : ");
    scanf("%s", p2name);
    printf("Wait....\n");
    
    board();
    while (1)
    {
        if (player1 % 2 == 1)
        {
            player1 = 1;
        }

    cond_1:
        fflush(stdin);

        if (player1 == 1)
        {
            xo = 'X';
            printf("%s your chance : ", p1name);
        
        }
        else
        {
            xo = 'O';
            printf("%s your chance : ", p2name);
        }

        scanf(" %d", &a);

        //For invalid input
        if (a <= 0 || a >= 10)
        {
            printf("Invalid Input!!\nInput Again\n");
            goto cond_1;
            return 0;
        }

        //for already input error
        for (int i = 0; i < 9; i++)
        {
            if ((boardnum[i] == 'X' || boardnum[i] == 'O') && a == i + 1)
            {
                printf("Already Input!!\nInput Again\n");
                goto cond_1;
                return 0;
            }
        }

        boardnum[a - 1] = xo;
        board();
        int result = check();
        if (result == 1)
        {
            printf("Player %d is a Winner", player1);
            return 0;
        }
        else if (result == 0)
        {
            printf("Draw Match");
            return 0;
        }

        player1++;
    }

    return 0;
}

int check()
{
    // Condition for winning
    //  1 for Winner, 0 for Draw, -1 for Continue
    if (boardnum[0] == boardnum[1] && boardnum[1] == boardnum[2])
    {
        return 1;
    }
    if (boardnum[3] == boardnum[4] == boardnum[4] == boardnum[5])
    {
        return 1;
    }
    if (boardnum[6] == boardnum[7] && boardnum[7] == boardnum[8])
    {
        return 1;
    }
    if (boardnum[0] == boardnum[3] && boardnum[3] == boardnum[6])
    {
        return 1;
    }
    if (boardnum[1] == boardnum[4] && boardnum[4] == boardnum[7])
    {
        return 1;
    }
    if (boardnum[2] == boardnum[5] && boardnum[5] == boardnum[8])
    {
        return 1;
    }
    if (boardnum[2] == boardnum[4] && boardnum[4] == boardnum[6])
    {
        return 1;
    }
    if (boardnum[0] == boardnum[4] && boardnum[4] == boardnum[8])
    {
        return 1;
    }
    int count = 0;
    for (int i = 0; i < 9; i++)
    {
        if (boardnum[i] == 'X' || boardnum[i] == 'O')
        {
            count++;
        }
    }
    if (count == 9)
    {
        return 0;
    }
    return -1;
}

void board()
{
    system("clear");
    printf("\n***Tic Tac Toe***\n\n");
    printf("     |     |    \n");
    printf("  %c  |  %c  |  %c \n", boardnum[0], boardnum[1], boardnum[2]);
    printf("     |     |    \n");
    printf("----------------\n");
    printf("     |     |    \n");
    printf("  %c  |  %c  |  %c \n", boardnum[3], boardnum[4], boardnum[5]);
    printf("     |     |    \n");
    printf("----------------\n");
    printf("     |     |    \n");
    printf("  %c  |  %c  |  %c \n", boardnum[6], boardnum[7], boardnum[8]);
    printf("     |     |    \n");
}
