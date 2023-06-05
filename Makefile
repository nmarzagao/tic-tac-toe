CC = gcc
NAME = bin/tic-tac-toe
FILES = src/main.c src/gamelib.h src/gamelib.c

all: compile

compile: src/main.c
	$(CC) -o $(NAME) $(FILES)

clean:
	rm -rf $(NAME)