#define  _CRT_SECURE_NO_WARNINGS

#include"game.h"



void InitBoard(char board[ROW][COL], int row, int col,int* player_count, int* computer_count)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}
	*player_count = 0;
	*computer_count = 0;
}


void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < row - 1; j++)
		{
			printf(" %c |", board[i][j]);
		}
		printf(" %c \n", board[i][ROW-1]);
		if (i < row - 1)
		{
			for (j = 0; j < row - 1; j++)
			{
				printf("---|", board[i][j]);
			}
			printf("---\n", board[i][ROW - 1]);
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col,int* player_count)
{
	int x = 0;
	int y = 0;
	int i = 0;
	printf("PlayerMove:>");
	while (1)
	{

		scanf("%d %d", &x, &y);
		if ((x > 0 && x <= ROW) && (y > 0 && y <= COL))
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				(*player_count)++;
				break;
			}
		}
		else
			printf("输入坐标错误，请重新输入\n");
	}
}

void ComputerMove(char board[ROW][COL], int row, int col,int* computer_count)
{
	int x = 0;
	int y = 0;
	printf("ComputerMove:>\n");
	while (1)
	{

		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			(*computer_count)++;
			break;
		}
	}
}


char IsWin(char board[ROW][COL], int row, int col,int* player_count, int* computer_count)
{
	int min_num = 2 * ROW - 1;
	int now_num = (*player_count) + (*computer_count);
	if (now_num >= min_num)
	{
		int i = 0;
		int j = 0;
		//检查行
		for (i = 0; i < WHAT_GAME; i++)
		{
			int player_row_count = 0;
			int computer_row_count = 0;
			for(j = 0;j < WHAT_GAME;j++)
			{

				if (board[i][j] == '*' && computer_row_count == 0)
				{
					player_row_count++;
				}
				if (board[i][j] == '#' && player_row_count == 0)
				{
					computer_row_count++;
				}

			}
			if (player_row_count == WHAT_GAME)
			{
				return '*';
			}
			if (computer_row_count == WHAT_GAME)
			{
				return '#';
			}

		}
		//检查列
		for (i = 0; i < WHAT_GAME; i++)
		{
			int player_col_count = 0;
			int computer_col_count = 0;
			for (j = 0; j < WHAT_GAME; j++)
			{
				if (board[j][i] == '*' && computer_col_count == 0)
				{
					player_col_count++;
				}
				if (board[i][j] == '#' && player_col_count == 0)
				{
					computer_col_count++;
				}

			}
			if (player_col_count == WHAT_GAME)
			{
				return '*';
			}
			if (computer_col_count == WHAT_GAME)
			{
				return '#';
			}

		}
		//检查对角
		int computer_duijiao_count = 0;
		int player_duijiao_count = 0;
		for (i = 0; i < WHAT_GAME; i++)
		{
			if(board[i][i] == '*' && computer_duijiao_count == 0)
			{
				player_duijiao_count++;
			}
			if (board[i][i] == '#' && player_duijiao_count == 0)
			{
				computer_duijiao_count++;
			}
		}
		if (player_duijiao_count == WHAT_GAME)
		{
			return '*';
		}
		else if (computer_duijiao_count == WHAT_GAME)
		{
			return '#';
		}


		for (i = 0; i < WHAT_GAME; i++)
		{
			if(board[i][row - i -1] == '*' && computer_duijiao_count == 0)
			{
				player_duijiao_count++;
			}
			if (board[i][i] == '#' && player_duijiao_count == 0)
			{
				computer_duijiao_count++;
			}
		}
		if (player_duijiao_count == WHAT_GAME)
		{
			return '*';
		}
		else if (computer_duijiao_count == WHAT_GAME)
		{
			return '#';
		}


		//判断平局
		if ((*player_count) + (*computer_count) == WHAT_GAME * WHAT_GAME)
		{
			return 'Q';
		}
	}
	return 'C';
}