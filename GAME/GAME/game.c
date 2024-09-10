#define  _CRT_SECURE_NO_WARNINGS

#include"game.h"

void menu()
{
	printf("*******************************\n");
	printf("******* 1.play   0.exit *******\n");
	printf("*******************************\n");
}

void game()
{
	char board[ROW][COL] = {0};
	char ret = 0;
	int player_count, computer_count;

	//初始化棋盘
	InitBoard(board, ROW, COL,&player_count,&computer_count);
	//展示棋盘
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		PlayerMove(board, ROW, COL, &player_count);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL, &player_count, &computer_count);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL, &computer_count);
		ret = IsWin(board, ROW, COL, &player_count, &computer_count);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
	}


	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int i = 0;
	do
	{
		menu();//打印菜单
		printf("请选择->:");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			game();
			//printf("开始游戏\n");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (i);
	return 0;
}

