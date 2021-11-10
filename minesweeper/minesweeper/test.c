#define _CRT_SECURE_NO_WARNINGS 1
#include "minesweeper.h"

void menu()
{
	printf("************************\n");
	printf("*******   1.play  ******\n");
	printf("*******   0.exit  ******\n");
	printf("************************\n");

}
void game()
{
	//不显示内存
	char mine[ROWS][COLS] = { 0 };
	//显示内存
	char show[ROWS][COLS] = { 0 };
	//初始化数组
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//显示数组
	DisplayBoard(show, ROW, COL);
	//设置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//排查雷
	FineMine(mine, show, ROW, COL);
}
void test()
{
	int input;
	srand((unsigned char)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//扫雷游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	}while (input);
}
int main()
{
	test();
	return 0;
}