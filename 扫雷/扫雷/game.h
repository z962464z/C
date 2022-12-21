#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EVSY_COUNT 10

void InitBoard(char board[ROWS][COLS], int rows,int cols, char set);

void DisplayBoard(char board[ROWS][COLS], int row, int col);

void SetMine(char board[ROWS][COLS], int row,int col);

void FindMind(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
