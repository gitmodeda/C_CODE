#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//��Ŀ1:��ɲ�������Ϸ
/*
int menu()
{
	printf("**************************\n");
	printf("****  1:play  0:exit  ****\n");
	printf("**************************\n");
	return 0;
}
int game()
{
	int guess, ret;
	ret = rand()%100+1;
	while (1)
	{
		printf("��µ�����:");
		scanf("%d", &guess);
		if (guess == ret)
		{
			printf("��¶���\n");
			break;
		}
		else if (guess > ret)
		{
			printf("��´���\n");
		}
		else if (guess < ret)
		{
			printf("���С��\n");
		}
}
		return 0;
}
int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����\n");
				break;
		}
	} while (input);
	return 0;
}
*/
/*��Ŀ2:д����������������������в�����Ҫ�����֣�
�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
*/
/*
int my_search(int arr[], int key, int left, int right)
{
	int mid;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (key > arr[mid])
		{
			left = mid + 1;
		}
		else if (key < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}

	}
	return -1;
}
int main()
{
	int a,flag;
	int b[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("��������Ҫ���ҵ�����(1-10):");
	scanf("%d", &a);
	flag=my_search(b,a,0,9);
	if (flag == -1)
	{
		printf("û�ҵ�\n");
	}
	else
		printf("ret = %d\n", flag);
	return 0;
}
*/
/*��Ŀ3:��д����ģ��������������ĳ�����
����������������룬������ȷ����ʾ����¼�ɹ���, �������
�����������룬����������Ρ����ξ�������ʾ�˳�����*/
/*
int main()
{
	int input[20];
	int flag,n=3;
	printf("�������룬������������������\n");
	printf("������һ������:\n");	
	while(n > 0&&n<4){
		scanf("%s", input);
		flag = strcmp(input, "123456");
		n--;
		if (flag == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
			printf("��ʣ����%d\n", n);
		}
	}
	if (n <= 0)
	{
		printf("�˳�����\n");
	}
	return 0;
}
*/
/*��Ŀ4:��дһ�����򣬿���һֱ���ռ����ַ���
�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
��������ֲ������*/
int main()
{
	char ch;
	printf("�������ַ�:\n");
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'a'&&ch <= 'z')
		{
			printf("%c\n", ch - 32);
		}
		else if (ch >= 'A'&&ch <= 'a')
		{
			printf("%c\n", ch + 32);
		}
		else if (ch >= 0 && ch <= 9)
		{
			printf("\n");
		}
	}
	return 0;
}