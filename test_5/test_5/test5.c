#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//题目1:完成猜数字游戏
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
		printf("请猜的数字:");
		scanf("%d", &guess);
		if (guess == ret)
		{
			printf("你猜对了\n");
			break;
		}
		else if (guess > ret)
		{
			printf("你猜大了\n");
		}
		else if (guess < ret)
		{
			printf("你猜小了\n");
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
		printf("请选择>");
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
				printf("选择错误\n");
				break;
		}
	} while (input);
	return 0;
}
*/
/*题目2:写代码可以在整型有序数组中查找想要的数字，
找到了返回下标，找不到返回 - 1.（折半查找）
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
	printf("请输入想要查找的数字(1-10):");
	scanf("%d", &a);
	flag=my_search(b,a,0,9);
	if (flag == -1)
	{
		printf("没找到\n");
	}
	else
		printf("ret = %d\n", flag);
	return 0;
}
*/
/*题目3:编写代码模拟三次密码输入的场景。
最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
可以重新输入，最多输入三次。三次均错，则提示退出程序。*/
/*
int main()
{
	int input[20];
	int flag,n=3;
	printf("输入密码，最多可以输入三次密码\n");
	printf("请输入一段密码:\n");	
	while(n > 0&&n<4){
		scanf("%s", input);
		flag = strcmp(input, "123456");
		n--;
		if (flag == 0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
			printf("还剩次数%d\n", n);
		}
	}
	if (n <= 0)
	{
		printf("退出程序\n");
	}
	return 0;
}
*/
/*题目4:编写一个程序，可以一直接收键盘字符，
如果是小写字符就输出对应的大写字符，
如果接收的是大写字符，就输出对应的小写字符，
如果是数字不输出。*/
int main()
{
	char ch;
	printf("请输入字符:\n");
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