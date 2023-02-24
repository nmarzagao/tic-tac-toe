CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=c11

SRCS = tic_tac_toe.c tictactoe_functions.c
OBJS = $(SRCS:.c=.o)

.PHONY: all clean

all: tic_tac_toe

tic_tac_toe: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o tic_tac_toe

%.o: %.c tic_tac_toe.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) tic_tac_toe
