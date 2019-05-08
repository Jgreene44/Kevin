//
// Created by jgreene44 on 5/8/2019.
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#ifndef KEVIN_GAME_H
#define KEVIN_GAME_H
/* Definitions */
#define BOARD_SIZE 3
#define TRUE 0
#define FALSE 1

#endif //KEVIN_GAME_H

typedef struct Game{
    char board[BOARD_SIZE][BOARD_SIZE];
    char game_board[BOARD_SIZE][BOARD_SIZE];
    int lost;
    char username[50];
}Game;

typedef struct Welcome{
    char firstLine[50];
    char secondLine[50];
    char thirdLine[50];
}Welcome;

typedef enum gameState {
    Before,
    InProgress,
}gameState;

typedef enum WinOrLose {
    Win,
    Lose
}WinOrLose;



void header();
void makeFrontBoard();
void makeBackBoard();
void populateBoard();
void printFrontBoard();
void printBackBoard();
void start();
int playGame();
void playAgain();
int CheckGameState();
void checkMine(int, int);
int checkNearbyMines(int, int);
void clear();