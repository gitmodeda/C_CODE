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
	//����ʾ�ڴ�
	char mine[ROWS][COLS] = { 0 };
	//��ʾ�ڴ�
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ʾ����
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//�Ų���
	FineMine(mine, show, ROW, COL);
}
void test()
{
	int input;
	srand((unsigned char)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//ɨ����Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	}while (input);
}
int main()
{
	test();
	return 0;
}