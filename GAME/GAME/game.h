#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define WHAT_GAME 3
#define ROW WHAT_GAME
#define COL WHAT_GAME

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col,int* player_count,int* computer_count);

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL], int row, int col, int* player_count);

//��������
void ComputerMove(char board[ROW][COL], int row, int col, int* computer_count);

//���Ӯ - '*'
//����Ӯ - '#'
//ƽ�� - 'Q'
//���� - 'C'
char IsWin(char board[ROW][COL], int row, int col,int* player_count, int* computer_count);