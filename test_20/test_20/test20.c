/*
1.自定义类型部分知识写一篇博客。
知识点：
>结构体类型创建
struct book{
	char title[MAXTITL];
	char author[AXAUTL];
	float value;
}library;
>结构体初始化
struct book library ={"The Pious Pirate and the Devious Damsel",
					  "Renee Vivotte",
					  l.95
};
>结构体内存对齐
1.第一个成员在结构体变量偏移量为0的地址处。
2.其他成员变量要对齐到某个数字的整数倍的地址处。
3.结构体总大小为最大对齐数的整数倍。
4.如果嵌套了结构体的情况，嵌套的结构体对齐到自己最大对齐数的整数倍处，结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍。
5.结构体的对齐数为结构体当中所有对齐数中的最大对齐数。
>位段，位段计算机大小。
位段(bit-field)是以位为单位来定义结构体(或联合体)中的成员变量所占的空间。含有位段的结构体(联合体)称为位段结构。采用位段结构既能够节省空间，又方便于操作。
>枚举+联合。
*/
/*
2.实现一个通讯录；
通讯录可以用来存储1000个人的信息，每个人的信息包括：
姓名、性别、年龄、电话、住址
提供方法：
1.	添加联系人信息
2.	删除指定联系人信息
3.	查找指定联系人信息
4.	修改指定联系人信息
5.	显示所有联系人信息
6.	清空所有联系人
7.	以名字排序所有联系人
8.  保存联系人到文件
9.  加载联系人
*/
#define _CRT_SECURE_NO_WARNINGS
#include "test20.h"

int Find(pContact pc, char name[])//查找
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

//初始化通讯录
void InitContact(pContact pc)
{
	pc->sz = 0;
	memset(pc->book, 0, sizeof(pc->book));
}


//添加联系人的信息
void AddPersonInfo(pContact pc)
{

	if (pc->sz == CONTACT_MAK)
	{
		printf("通信录已满，无法添加新的联系人\n");
		return;
	}

	printf("请输入名字:>");
	scanf("%s", pc->book[pc->sz].name);
	printf("请输入性别:>");
	scanf("%s", pc->book[pc->sz].sex);
	printf("请输入年龄:>");
	scanf("%d", &pc->book[pc->sz].age);
	printf("请输入电话号码:>");
	scanf("%s", pc->book[pc->sz].tele);
	printf("请输入地址:>");
	scanf("%s", pc->book[pc->sz].addr);
	pc->sz++;
}
//删除指定联系人信息
void DelPersonInfo(pContact pc)
{
	char name[20];
	int pos;
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法删除\n");
		return;
	}
	//找到要删除的人
	printf("请输入要删除的人的名字:>");
	scanf("%s", name);
	pos = Find(pc, name);
	if (pos == -1)
	{
		printf("没有该联系人，无法删除");
	}
	for (; pos < pc->sz - 1; pos++)
	{
		pc->book[pos] = pc->book[pos + 1];
	}
	pc->sz--;
	
}
//查找指定联系人信息
int SearchPersonInfo(pContact pc)
{
	char name[20];
	int pos;
	printf("请输入需要查找指定联系人的名字:>");
	scanf("%s", name);
	pos = Find(pc, name);
	if (pos == -1)
	{
		printf("无改指定联系人的消息:\n");
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
//修改指定联系人信息
void ModifyPersonInfo(pContact pc)
{
	int ret = SearchPersonInfo(pc);
	if (ret != -1)
	{
		printf("请输入要修改的联系人的信息:>");
		printf("请输入修改的名字:>");
		scanf("%s", pc->book[ret].name);
		printf("请输入修改的性别:>");
		scanf("%s", pc->book[ret].sex);
		printf("请输入修改的年龄:>");
		scanf("%d", pc->book[ret].age);
		printf("请输入修改的电话:>");
		scanf("%s", pc->book[ret].tele);
		printf("请输入修改的地址:>");
		scanf("%s", pc->book[ret].addr);
	}
	else
	{
		printf("无法修改\n");
	}
}
//显示所有联系人信息
void ShowAllPerson(pContact pc)
{
	int i;
	if (pc->sz == 0)
	{
		printf("无联系人，无法显示\n");
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
//清空所有联系人
void ClearPerson(pContact pc)
{
	pc->sz = 0;
	printf("已清空联系人\n");
}
//以名字排序所有联系人
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
		printf("请选择:>");
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