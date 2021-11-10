#define _CRT_SECURE_NO_WARNINGS 1
#include "minesweeper.h"

//初始化数组
void InitBoard(char board[ROWS][COLS], int row, int col, char ret)
{
	int i;
	int j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ret;
		}
	}
}
//显示数组
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i;
	int j;
	//打印列号
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}
//设置雷
void SetMine(char board[ROWS][COLS], int row, int col)
{

	int count = EASY_COUNT;
	while (count)
	{
		//生成随机下标
		int i = rand() % row + 1;
		int j = rand() % col + 1;
		if (board[i][j] == '0')
		{
			//布雷
			board[i][j] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int i, int j)
{
	return mine[i - 1][j] +
		mine[i - 1][j - 1] +
		mine[i][j - 1] +
		mine[i + 1][j - 1] +
		mine[i + 1][j] +
		mine[i + 1][j + 1] +
		mine[i][j + 1] +
		mine[i - 1][j + 1] + 8 * '0';
}
//排查雷
void FineMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int i, j;
	int count;
	int win = 0;
	while (win<row*col - EASY_COUNT)
	{
		printf("请输入坐标>");
		scanf("%d%d", &i, &j);
		//判断坐标的合法性
		if (i >= 1 && i <= row&&j >= 1 && j <= col)
		{
			//1.已踩到雷
			if (mine[i][j] == '1')
			{
				printf("你已踩到雷，游戏结束\n");
				break;
			}
			else//2.没踩到雷
			{
				count = get_mine_count(mine, i, j);
				show[i][j] = count + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
			printf("坐标错误，请重新输入.\n");
	}
	if (win == row*col - EASY_COUNT)
	{
		printf("恭喜你，你赢了\n");
	}
}