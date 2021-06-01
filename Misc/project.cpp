#include<stdio.h>
#include<conio.h>
#include<windows.h>

char ttt[17] = { 'Z','A' ,'B','C','D','E','F','G','H','I','J','K','L','M','N','P','Q' };
int checkwin();
void drawboard();


int main()
{
    int player = 1, i;
    char mark, c;
    do
    {
        system ("cls");

        drawboard();
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number:  ", player);
        scanf("%c", &c);
        if(player == 1)
            mark= 'X';
        else if(player == 2)
            mark= 'O';
        switch(c)
        {
            case 'A': ttt[1] = mark; break;
            case 'B': ttt[2] = mark; break;
            case 'C': ttt[3] = mark; break;
            case 'D': ttt[4] = mark; break;
            case 'E': ttt[5] = mark; break;
            case 'F': ttt[6] = mark; break;
            case 'G': ttt[7] = mark; break;
            case 'H': ttt[8] = mark; break;
            case 'I': ttt[9] = mark; break;
            case 'J': ttt[10] = mark; break;
            case 'K': ttt[11] = mark; break;
            case 'L': ttt[12] = mark; break;
            case 'M': ttt[13] = mark; break;
            case 'N': ttt[14] = mark; break;
            case 'P': ttt[15] = mark; break;
            case 'Q': ttt[16] = mark; break;
            default:
                printf("Invalid Move");
                player--;
                break;
        }
        player++;
        i=checkwin();

    }while(i== -1);

    system ("cls");

    drawboard();
    if (i==1)
        printf("PLAYER %d WINS ", --player);
    else
        printf("GAME DRAW");
    getch();
}

int checkwin()
{
    if (ttt[1] == ttt[2] && ttt[2] == ttt[3] && ttt[3] == ttt[4] )
        return 1;
    else if (ttt[5] == ttt[6] && ttt[6] == ttt[7] && ttt[7] == ttt[8])
        return 1;
    else if (ttt[9] == ttt[10] && ttt[10] == ttt[11] && ttt[11] == ttt[12])
        return 1;
    else if (ttt[13] == ttt[14] && ttt[14] == ttt[15] && ttt[15] == ttt[16])
        return 1;
    else if (ttt[1] == ttt[5] && ttt[5] == ttt[9] && ttt[9] == ttt[13])
        return 1;
    else if (ttt[2] == ttt[6] && ttt[6] == ttt[10] && ttt[10] == ttt[14])
        return 1;
    else if (ttt[3] == ttt[7] && ttt[7] == ttt[11] && ttt[11] == ttt[15])
        return 1;
    else if (ttt[4] == ttt[8] && ttt[8] == ttt[12] && ttt[12] == ttt[16])
        return 1;
    else if (ttt[1] == ttt[6] && ttt[6] == ttt[11] && ttt[11] == ttt[16])
        return 1;
    else if (ttt[4] == ttt[7] && ttt[7] == ttt[10] && ttt[10] == ttt[13])
        return 1;
    else if (ttt[1] != 'A' && ttt[2] != 'B' && ttt[3] != 'C' &&
        ttt[4] != 'D' && ttt[5] != 'E' && ttt[6] != 'F' && ttt[7]
        != 'G' && ttt[8] != 'H' && ttt[9] != 'I' && ttt[10] != 'J' && ttt[11] != 'K' && ttt[12] != 'L' && ttt[13] != 'M' &&
        ttt[14] != 'N' && ttt[15] != 'P' && ttt[16] != 'Q' )
        return 0;
    else
        return  -1;
}

void drawboard()
{

    printf("\n\n\tCONNECT FOUR\n");
    printf("(Game Instrucions: This is a two \nplayer game. The player should choose \nthe letter where they want to put their \nchosen mark. The player that puts \nfour marks in one line WINS)\n\n");
    printf("Player 1(X) - Player 2(O)\n\n\n");
    printf("      |      |      |      \n");
    printf("  %c   |  %c   |  %c   |  %c   \n", ttt[1], ttt[2], ttt[3], ttt[4]);
    printf("______|______|______|______\n");
    printf("      |      |      |      \n");
    printf("  %c   |  %c   |  %c   |  %c   \n", ttt[5], ttt[6], ttt[7], ttt[8]);
    printf("______|______|______|______\n");
    printf("      |      |      |      \n");
    printf("  %c   |  %c   |  %c   |  %c   \n", ttt[9], ttt[10], ttt[11], ttt[12]);
    printf("______|______|______|______\n");
    printf("      |      |      |      \n");
    printf("  %c   |  %c   |  %c   |  %c   \n", ttt[13], ttt[14], ttt[15], ttt[16]);
    printf("      |      |      |      \n\n ");
}
