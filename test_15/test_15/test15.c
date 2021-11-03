//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
/*1.一个数组中只有两个数字是出现一次，
其他所有数字都出现了两次。
找出这两个只出现一次的数字，编程实现。*/
/*
void sort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		if (arr[j]>arr[j + 1])
		{
			int tmp;
			tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;
		}
	}
}

void func(int arr[], int n, int *num1, int *num2)
{
	int  tmp = 0;
	for (int i = 0; i < n; i += 2)
	{
		if (arr[i] == arr[i + 1])
			continue;
		else
		{
			if (tmp == 0)
			{
				*num1 = arr[i];
				i = i + 1;
			}
			else if (tmp == 1)
			{
				*num2 = arr[i];
				i = i + 1;
			}
			tmp++;
		}
	}
}

int main()
{
	int a[10] = { 1, 4, 5, 8, 56, 4, 8, 5, 7, 1 }; //56 7
	sort(a, 10);
	int num1, num2;
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	func(a, 10, &num1, &num2);
	printf("%d %d", num1, num2);
	system("pause");
	return 0;
}
*/

/*题目2:喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
给20元，可以多少汽水。
编程实现。*/
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水。
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int money = 20;
	int sum = money;
	int temp = 20;
	int yushu = 0;
	int i = 0;
	int arr[10] = { 0 };//记录每一轮不能换的瓶子数
	while (1)
	{
		++i;
		temp = temp / 2;//10,5,2,1
		yushu = temp % 2;//0,0,1,0
		arr[i] = yushu;
		sum = temp + sum;//30,35,37,38,39
		if (1 == temp)//将最后一次换瓶子单独判断，因为还要考虑前几轮剩余瓶子的问题
		{
			yushu = 0;
			for (i = 0; i < 10; ++i)
			{
				yushu += arr[i];//统计所有的不能换的瓶子
			}
			yushu %= 10;
			temp = (temp + yushu) / 2;//去换瓶子
			sum = sum + temp;//所有能换到的瓶子数
			break;
		}

	}
	printf("%d", sum);
	system("pause");
	return 0;
}
*/
//题目3:模拟实现strcpy
/*char *My_Strcpy(char *s1, const char *s2)
{
	if (s1 == NULL || s2 == NULL)
	{
		return NULL;
	}
	if (s1 == s2)
		return s1;
	char *pTemp = s1;
	while ((*s1++ = *s2++) != '\0');
	return pTemp;
}
int main()
{
	char str1[100];
	char str2[100] = "djfioadf";
	My_Strcpy(str1, str2);
	printf("%s", str1);
	return 0;
}*/
//4.模拟实现strcat
char *My_Strcat(char *s1, const char *s2)
{
	char *pTemp = s1;
	assert(s1 != NULL);
	assert(s2 != NULL);

	while (*s1 != '\0')
	{
		s1++;
	}
	while (*s2 != '\0')
	{
		*s1++ = *s2++;
	}
	return pTemp;
	
}
int main()
{
	char str1[100] = "dsf";
	char str2[100] = "djfioadf";
	My_Strcat(str1, str2);
	printf("%s", str1);
	return 0;
}