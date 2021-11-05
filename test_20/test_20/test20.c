/*
1.�Զ������Ͳ���֪ʶдһƪ���͡�
֪ʶ�㣺
>�ṹ�����ʹ���
struct book{
	char title[MAXTITL];
	char author[AXAUTL];
	float value;
}library;
>�ṹ���ʼ��
struct book library ={"The Pious Pirate and the Devious Damsel",
					  "Renee Vivotte",
					  l.95
};
>�ṹ���ڴ����
1.��һ����Ա�ڽṹ�����ƫ����Ϊ0�ĵ�ַ����
2.������Ա����Ҫ���뵽ĳ�����ֵ��������ĵ�ַ����
3.�ṹ���ܴ�СΪ������������������
4.���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ����������������������ṹ��������С��������������������Ƕ�׽ṹ��Ķ�����������������
5.�ṹ��Ķ�����Ϊ�ṹ�嵱�����ж������е�����������
>λ�Σ�λ�μ������С��
λ��(bit-field)����λΪ��λ������ṹ��(��������)�еĳ�Ա������ռ�Ŀռ䡣����λ�εĽṹ��(������)��Ϊλ�νṹ������λ�νṹ���ܹ���ʡ�ռ䣬�ַ����ڲ�����
>ö��+���ϡ�
*/
/*
2.ʵ��һ��ͨѶ¼��
ͨѶ¼���������洢1000���˵���Ϣ��ÿ���˵���Ϣ������
�������Ա����䡢�绰��סַ
�ṩ������
1.	�����ϵ����Ϣ
2.	ɾ��ָ����ϵ����Ϣ
3.	����ָ����ϵ����Ϣ
4.	�޸�ָ����ϵ����Ϣ
5.	��ʾ������ϵ����Ϣ
6.	���������ϵ��
7.	����������������ϵ��
8.  ������ϵ�˵��ļ�
9.  ������ϵ��
*/
#define _CRT_SECURE_NO_WARNINGS
#include "test20.h"

int Find(pContact pc, char name[])//����
{
	int i;
	for (i = 0; i < CONTACT_MAK; i++)
	{
		if (strcmp(name, pc->book[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}

//��ʼ��ͨѶ¼
void InitContact(pContact pc)
{
	pc->sz = 0;
	memset(pc->book, 0, sizeof(pc->book));
}


//�����ϵ�˵���Ϣ
void AddPersonInfo(pContact pc)
{

	if (pc->sz == CONTACT_MAK)
	{
		printf("ͨ��¼�������޷�����µ���ϵ��\n");
		return;
	}

	printf("����������:>");
	scanf("%s", pc->book[pc->sz].name);
	printf("�������Ա�:>");
	scanf("%s", pc->book[pc->sz].sex);
	printf("����������:>");
	scanf("%d", &pc->book[pc->sz].age);
	printf("������绰����:>");
	scanf("%s", pc->book[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pc->book[pc->sz].addr);
	pc->sz++;
}
//ɾ��ָ����ϵ����Ϣ
void DelPersonInfo(pContact pc)
{
	char name[20];
	int pos;
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
		return;
	}
	//�ҵ�Ҫɾ������
	printf("������Ҫɾ�����˵�����:>");
	scanf("%s", name);
	pos = Find(pc, name);
	if (pos == -1)
	{
		printf("û�и���ϵ�ˣ��޷�ɾ��");
	}
	for (; pos < pc->sz - 1; pos++)
	{
		pc->book[pos] = pc->book[pos + 1];
	}
	pc->sz--;
	
}
//����ָ����ϵ����Ϣ
int SearchPersonInfo(pContact pc)
{
	char name[20];
	int pos;
	printf("��������Ҫ����ָ����ϵ�˵�����:>");
	scanf("%s", name);
	pos = Find(pc, name);
	if (pos == -1)
	{
		printf("�޸�ָ����ϵ�˵���Ϣ:\n");
		return -1;
	}
	else if (pos >= 0)
	{
		printf("%10s\n", pc->book[pos].name);
		printf("%5s\n", pc->book[pos].sex);
		printf("%5d\n", pc->book[pos].age);
		printf("%12s\n", pc->book[pos].tele);
		printf("%12s\n", pc->book[pos].addr);
		return pos;
	}
}
//�޸�ָ����ϵ����Ϣ
void ModifyPersonInfo(pContact pc)
{
	int ret = SearchPersonInfo(pc);
	if (ret != -1)
	{
		printf("������Ҫ�޸ĵ���ϵ�˵���Ϣ:>");
		printf("�������޸ĵ�����:>");
		scanf("%s", pc->book[ret].name);
		printf("�������޸ĵ��Ա�:>");
		scanf("%s", pc->book[ret].sex);
		printf("�������޸ĵ�����:>");
		scanf("%d", pc->book[ret].age);
		printf("�������޸ĵĵ绰:>");
		scanf("%s", pc->book[ret].tele);
		printf("�������޸ĵĵ�ַ:>");
		scanf("%s", pc->book[ret].addr);
	}
	else
	{
		printf("�޷��޸�\n");
	}
}
//��ʾ������ϵ����Ϣ
void ShowAllPerson(pContact pc)
{
	int i;
	if (pc->sz == 0)
	{
		printf("����ϵ�ˣ��޷���ʾ\n");
	}

	for (i = 1; i <= pc->sz; i++)
	{
		printf("%10s\n", pc->book[i - 1].name);
		printf("%5s\n", pc->book[i - 1].sex);
		printf("%5d\n", pc->book[i - 1].age);
		printf("%12s\n", pc->book[i - 1].tele);
		printf("%12s\n", pc->book[i - 1].addr);
	}
}
//���������ϵ��
void ClearPerson(pContact pc)
{
	pc->sz = 0;
	printf("�������ϵ��\n");
}
//����������������ϵ��
void SordPerson(pContact pc)
{
	int i;
	int j;
	for (i = 0; i < pc->sz; i++)
	{
		for (j = 0; j<pc->sz-1-i; j++)
		{
			if (strcmp(pc->book[j].name, pc->book[j + 1].name)>0)
			{
				PersonInfo tem = pc->book[j];
				pc->book[j] = pc->book[j+1];
				pc->book[j + 1] = tem;
			}
		}
	}
}
void menu()
{
	printf("****************************\n");
	printf("*** 1.ADD        2.DEL   ***\n");
	printf("*** 3.SEARCH     4.MODIFY***\n");
	printf("*** 5.SHOW       6.CLEAR ***\n");
	printf("*** 7.SORT       0.EXIT  ***\n");
	printf("***       8.SAVE         ***\n");
	printf("****************************\n");
}
void test()
{
	int input = 0;
	struct Contact con;
	InitContact(&con);
	do{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddPersonInfo(&con);
			break;
		case DEL:
			DelPersonInfo(&con);
			break;
		case SEARCH:
			SearchPersonInfo(&con);
			break;
		case MODIFY:
			ModifyPersonInfo(&con);
			break;
		case SHOW:
			ShowAllPerson(&con);
			break;
		case CLEAR:
			ClearPerson(&con);
			break;
		case SORT:
			SordPerson(&con);
			break;
		default:
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}