#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include "tic_tac_toe.h"

char board[3][3];

void reset_board(void) 
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }

}

void print_board(void) 
{
    printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
    printf("\n");

}

int check_free_spaces(void) 
{
    int freeSpaces = 9;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(board[i][j] != ' ')
            {
                freeSpaces--;
            }
        }
    }

    return freeSpaces;
}

void player_move(void) 
{
    int x, y;

   do
   {

    printf("Enter Row #(1-3): ");
    scanf("%d", &x);
    x--;

    printf("Enter Column #(1-3): ");
    scanf("%d", &y);
    y--;

    if(board[x][y] != ' ')
    {
        printf("Invalid move!");
    }
    else
    {
        board[x][y] = PLAYER;
        break;
    }

   } while (board[x][y] != ' ');

}   

void computer_move(void)
{
    srand(time(0));
    int x, y;

    if(check_free_spaces() > 0)
    {
        do
        {
            x = rand() % 3;
            y = rand() % 3;
        } while (board[x][y] != ' ');

        board[x][y] = COMPUTER;
        
    }
    else
    {
        print_winner(' ');
    }

}

char check_winner(void)
{
    for(int i = 0; i < 3; i++)
    {
        if(board[i][0] == board[i][1] && board[i][0] == board[i][2])
        {
            return board[i][0];
        }
    }
    for(int i = 0; i < 3; i++)
    {
        if(board[0][i] == board[1][i] && board[0][i] == board[2][i])
        {
            return board[0][i];
        }
    }

    for(int i = 0; i < 3; i++)
    {
        if(board[0][0] == board[1][1] && board[0][0] == board[2][2])
        {
            return board[0][0];
        }
    }

    for(int i = 0; i < 3; i++)
    {
        if(board[0][2] == board[1][1] && board[0][2] == board[2][0])
        {
            return board[0][2];
        }
    }

    return ' ';
}

void print_winner(char winner)
{
    if(winner == PLAYER)
    {
        printf("You Win!!\n");
    }
    else if(winner == COMPUTER)
    {
        printf("You Lose :(\n");
    }
    else
    {
        printf("It's a Tie");
    }
}