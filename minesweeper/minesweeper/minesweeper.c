#define _CRT_SECURE_NO_WARNINGS 1
#include "minesweeper.h"

//��ʼ������
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
//��ʾ����
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i;
	int j;
	//��ӡ�к�
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
//������
void SetMine(char board[ROWS][COLS], int row, int col)
{

	int count = EASY_COUNT;
	while (count)
	{
		//��������±�
		int i = rand() % row + 1;
		int j = rand() % col + 1;
		if (board[i][j] == '0')
		{
			//����
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
//�Ų���
void FineMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int i, j;
	int count;
	int win = 0;
	while (win<row*col - EASY_COUNT)
	{
		printf("����������>");
		scanf("%d%d", &i, &j);
		//�ж�����ĺϷ���
		if (i >= 1 && i <= row&&j >= 1 && j <= col)
		{
			//1.�Ѳȵ���
			if (mine[i][j] == '1')
			{
				printf("���Ѳȵ��ף���Ϸ����\n");
				break;
			}
			else//2.û�ȵ���
			{
				count = get_mine_count(mine, i, j);
				show[i][j] = count + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
			printf("�����������������.\n");
	}
	if (win == row*col - EASY_COUNT)
	{
		printf("��ϲ�㣬��Ӯ��\n");
	}
}