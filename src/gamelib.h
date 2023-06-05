#ifndef GAMELIB_H
#define GAMELIB_H

#define PLAYER 'X'
#define COMPUTER 'O'

void reset_board(void);
void print_board(void);
int check_free_spaces(void);
void player_move(void);
void computer_move(void);
char check_winner(void);
void print_winner(char winner);

#endif 
