#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*题目1:实现一个函数，可以左旋字符串中的k个字符。
ABCD左旋一个字符得到BCDA
ABCD左旋两个字符得到CDAB */
/*
int main()
{
	char string[] = "ABCD";
	char tmp;
	int k,len,i,j =0;
	len = strlen(string);
	printf("请输入一个数:");
	scanf("%d", &k);
	for (i = 1; i <= k; i++)
	{ 
		j = 0;
		tmp = *(string + j);
		for (; j < len-1; j++)
		{
			string[j] = string[j+1];
		}
		string[j] = tmp;
	}
	printf("%s", string);
	return 0;
}
*/
/*题目2:判断一个字符串是否为另外一个字符串旋转之后的字符串。
例如：给定s1 = AABCD和s2 = BCDAA，返回1
给定s1 = abcd和s2 = ACBD，返回0.*/
int reserse(char *s1, char *s2)
{
	char tmp;
	int k=1,len, j = 0,flag=0;
	len = strlen(s1);
	while (k++)
	{
		j = 0;
		tmp = *(s1 + j);
		for (; j < len - 1; j++)
		{
			s1[j] = s1[j + 1];
		}
		s1[j] = tmp;
		printf("%s", s1);
		if (0==strcmp(s1,s2))
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		return 1;
	}
	else
		return 0;
}
int main()
{
	char s1[] = "AABCD";
	char s2[] = "BCDAA";
	int i;
	i=reserse(s1, s2);
	printf("%d", i);
	return 0;
}