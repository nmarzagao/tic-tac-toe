#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include "tic_tac_toe.h"


int main(void)
{
    char winner = ' ';
    char response;

   do
   {
        winner = ' ';
        response = ' ';

        reset_board();
        while (winner == ' ' && check_free_spaces() != 0)
        {
            print_board();
        
            player_move();

            winner = check_winner();
        
            if(winner != ' ' || check_free_spaces() == 0)
            {
                break;
            }

            computer_move();

            winner = check_winner();
        
            if(winner != ' ' || check_free_spaces() == 0)
            {
                break;
            }
        }

        print_board();
        print_winner(winner);

        printf("\nWould you like to play again?(y/n)\n");
        scanf(" %c", &response);

        response = toupper(response);
    
    } while(response == 'Y');
   
    printf("Thanks for playing!\n");

    return 0;
}

