# Tic Tac Toe

A student project for a comandline tic tac toe game.

Code written following this [tutorial].(https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&cad=rja&uact=8&ved=2ahUKEwig9Z-jx6z_AhWcRLgEHRKkAk0QtwJ6BAgIEAI&url=https%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3D_889aB2D1KI&usg=AOvVaw0r7z4nO-Ysp6_RKiLfamhX)

## Build Process
To build this project I used gcc to compile it.
```bash
git clone https://github.com/nmarzagao/tic-tac-toe.git

cd tic-tac-toe/

make 

./bin/tic-tac-toe
```

If you want to use a different compiler change the ```CC``` variable in the make file.
for exemple:
```make
CC = clang
```

## Project Structure
This project is very simple so I'll be quick.
- All source files are in the ```src``` directory.
- When the project compiles it's bineries are sent to the ```bin``` directory.
- The project is divided in to 2 parts:
    - ```gamelib.c``` and ```.h```: The files contaning all of the games funtions.
    - ```main.c```: The file contaning the main funtion call.

- Note: I plan on rewriting a more complete version of this game, for pactice.