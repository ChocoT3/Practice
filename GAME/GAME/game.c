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

	//��ʼ������
	InitBoard(board, ROW, COL,&player_count,&computer_count);
	//չʾ����
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
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int i = 0;
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��->:");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			game();
			//printf("��ʼ��Ϸ\n");
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (i);
	return 0;
}

