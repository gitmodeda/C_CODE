#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("*********************\n");
	printf("****1.play  0.exit***\n");
	printf("*********************\n");
}
void game()
{
	char ret;
	char board[ROW][COL] = { 0 };
	//初始化数组
	InitBoard(board, ROW, COL);
	//显示方块格
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断谁赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢:\n");
	}
	if (ret == '#')
	{
		printf("电脑赢:\n");
	}
	if (ret == 'P')
	{
		printf("平局:\n");
	}
	DisplayBoard(board, ROW, COL);
}
void test()
{
	int input;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0: 
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}