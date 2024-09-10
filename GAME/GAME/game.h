#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define WHAT_GAME 3
#define ROW WHAT_GAME
#define COL WHAT_GAME

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col,int* player_count,int* computer_count);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col, int* player_count);

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col, int* computer_count);

//玩家赢 - '*'
//电脑赢 - '#'
//平局 - 'Q'
//继续 - 'C'
char IsWin(char board[ROW][COL], int row, int col,int* player_count, int* computer_count);