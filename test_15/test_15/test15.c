//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
/*1.һ��������ֻ�����������ǳ���һ�Σ�
�����������ֶ����������Ρ�
�ҳ�������ֻ����һ�ε����֣����ʵ�֡�*/
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

/*��Ŀ2:����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
��20Ԫ�����Զ�����ˮ��
���ʵ�֡�*/
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ��
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
	int arr[10] = { 0 };//��¼ÿһ�ֲ��ܻ���ƿ����
	while (1)
	{
		++i;
		temp = temp / 2;//10,5,2,1
		yushu = temp % 2;//0,0,1,0
		arr[i] = yushu;
		sum = temp + sum;//30,35,37,38,39
		if (1 == temp)//�����һ�λ�ƿ�ӵ����жϣ���Ϊ��Ҫ����ǰ����ʣ��ƿ�ӵ�����
		{
			yushu = 0;
			for (i = 0; i < 10; ++i)
			{
				yushu += arr[i];//ͳ�����еĲ��ܻ���ƿ��
			}
			yushu %= 10;
			temp = (temp + yushu) / 2;//ȥ��ƿ��
			sum = sum + temp;//�����ܻ�����ƿ����
			break;
		}

	}
	printf("%d", sum);
	system("pause");
	return 0;
}
*/
//��Ŀ3:ģ��ʵ��strcpy
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
//4.ģ��ʵ��strcat
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