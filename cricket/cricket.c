#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char all;
    int one, two, three, four, six, out, score, ball, wide, over = 0;
    one = 0;
    two = 0;
    three = 0;
    four = 0;
    six = 0;
    out = 0;
    score = 0, ball = 0, wide = 0, over = 0;

    system("clear");
    printf("How to use : \n\nEnter 0 for DOT Ball\nEnter 1 for SINGLE\nEnter 2 for DOUBLE\nEnter 3 for TRIPLE\nEnter 4 for FOUR\nEnter 6 for SIX\nEnter w for WIDE\nEnter o for OUT(WICKET)\n");
    printf("\nEnter Any key Start!! ");
    getch();
    system("clear");

    while (1)
    {
        fflush(stdin);
        printf("\nPlease Enter : ");
        scanf("%c", &all);

        ball++;

        over = over + ball / 6;
        ball = ball % 6;

        switch (all)
        {
        case '0':
            printf("\tIts a DOT ball!! Wonderful Bowling performation by bowler\n");
            printf("\t%d/%d in %d.%d over\n", score, out, over, ball);
            break;
        case '1':
            score = score + 1;

            one++;
            printf("\tBatsman runs for 1 run");
            printf("\t%d/%d in %d.%d over\n", score, out, over, ball);
            break;
        case '2':
            score = score + 2;
            two++;
            printf("\t%d/%d in %d.%d over\n", score, out, over, ball);
            break;
        case '3':
            score = score + 3;
            three++;
            printf("\t%d/%d in %d.%d over\n", score, out, over, ball);
            printf("\tBatsman runs for 3 runs, nice running between the wickets.\n");
            break;
        case '4':
            score = score + 4;
            four++;
            printf("\tNice shots, its FOUR!! Good runs for Batting team.\n");
            printf("\t%d/%d in %d.%d over\n", score, out, over, ball);
            break;
        case '6':
            score = score + 6;
            six++;
            printf("\tWOW, its SIX!! Ball goes to out of boundray.\n");
            printf("\t%d/%d in %d.%d over\n", score, out, over, ball);
            break;
        case 'o':
            // score = score + 1;
            out++;
            printf("\tOh its OUT!! Very big shock to batting team.\n");
            printf("\t%d/%d in %d.%d over\n", score, out, over, ball);
            break;
        case 'w':
            score = score + 1;
            wide++;
            ball--;
            printf("\tWIDE ball\n");
            printf("\t%d/%d in %d.%d over\n", score, out, over, ball);
            break;
        case 'e':
            // score = score + 1;
            ball--;
            if (ball == 6)
            {
                over++;
                ball = 0;
            }
            printf("\n\tWell Played!! Here is your all info");
            printf("\nTotal Scores = %d\n", score);
            printf("Singles = %d\n", one);
            printf("Double = %d\n", two);
            printf("Triple = %d\n", three);
            printf("Fours = %d\n", four);
            printf("Six = %d\n", six);
            printf("Wicket = %d\n", out);
            printf("Wide = %d\n", wide);
            printf("Total over played = %d.%d\n", over, ball);
            return 0;
            break;

        default:
            ball--;
            printf("Invalid Input!!\n");
            break;
        }
        if (out == 10)
        {
            printf("Its All out!!\n\n");
            printf("\n\tWell Played!! Here is your all info");
            printf("\nTotal Scores = %d\n", score);
            printf("Singles = %d\n", one);
            printf("Double = %d\n", two);
            printf("Triple = %d\n", three);
            printf("Fours = %d\n", four);
            printf("Six = %d\n", six);
            printf("Wicket = %d\n", out);
            printf("Wide = %d\n", wide);
            printf("Total over played = %d.%d\n", over, ball);
            return 0;
        }
    }

    return 0;
}
