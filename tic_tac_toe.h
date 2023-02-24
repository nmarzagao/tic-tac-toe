#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#define PLAYER 'X'
#define COMPUTER 'O'

/* 
 * Resets the game board to its initial state.
 */
void reset_board(void);

/*
 * Prints the current state of the game board to the console.
 */
void print_board(void);

/*
 * Checks how many free spaces are left on the game board.
 *
 * Returns:
 *   The number of free spaces left on the board.
 */
int check_free_spaces(void);

/*
 * Allows the human player to make a move on the game board.
 */
void player_move(void);

/*
 * Allows the computer player to make a move on the game board.
 */
void computer_move(void);

/*
 * Checks if there is a winner on the game board.
 *
 * Returns:
 *   The character of the winning player ('X' or 'O'), or '-' if there is no winner yet.
 */
char check_winner(void);

/*
 * Prints the winner of the game to the console.
 *
 * Parameters:
 *   winner: The character of the winning player ('X' or 'O'), or '-' if there is no winner.
 */
void print_winner(char winner);

#endif /* TIC_TAC_TOE_H */
