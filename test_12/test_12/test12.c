#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
题目1:编写函数：
unsigned int reverse_bit(unsigned int value);
这个函数的返回值是value的二进制位模式从左到右翻转后的值。
如：
在32位机器上25这个值包含下列各位：
00000000000000000000000000011001
翻转后：（2550136832）
10011000000000000000000000000000
程序结果返回：
2550136832
*/
/*
unsigned int reverse_bit(unsigned int value)
{
	char arr[33] = { 0 };
	int i ,ret=0;
	for (i = 0; i < 32;i++)
	{
		if ((value >> i)&0x1 )
		{
			arr[i] = '1';
		}
		else
			arr[i] = '0';
	}
	arr[i] = 0;
	for (i = 0; arr[i] != 0; i++)
	{
		printf("%c",arr[i]);
	}
	for (i = 0; arr[i] != 0; i++)
	{
		ret = (ret * 2) + arr[i] - '0';
	}

	return ret;
}
int main()
{

	unsigned int value;
	unsigned int ret;
	printf("请输入一个数:");
	scanf("%d", &value);
	ret=reverse_bit(value);
	printf("%u", ret);
	return 0;
}
*/
//题目2:不使用（a+b）/2这种方式，求两个数的平均值
/*
int add(int a, int b)
{
	int tem;
	do
	{
		tem = a^b;
		b = a&b;
		a = tem;
		b <<= 1;
	} while (b != 0);
	return a;
}int avg(int a, int b)
{
	return add(((a^b) >> 1), a&b);
}
int main()
{
	int a, b;
	int ret;
	printf("请输入两个数:");
	scanf("%d %d", &a, &b);
	ret = avg(a,b);
	printf("%d", ret);
	return 0;
}
*/
/*
题目3:编程实现：
一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
请找出这个数字。（使用位运算）
*/
/*
int main()
{
	int arr[7] = { 1, 2, 3, 4, 1, 2, 3 };
	int i,ret=0;
	int len = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < len; i++)
	{
		ret = ret ^ arr[i];//当一个0的二进制与成对的一个数异或时结果为0
	}
	printf("%d", ret);
	return 0;
}
*/
/*
题目4:
有一个字符数组的内容为:"student a am i",
请你将数组的内容改为"i am a student".
要求：
不能使用库函数。
只能开辟有限个空间（空间个数和字符串的长度无关）。

student a am i
i ma a tneduts
i am a student
*/
void reverse(char* left, char* right)
{
	char tmp;
	while (left <= right)
	{
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void reverse_str(char arr[], int len)
{
	char *letf;
	char *right;
	char *start;
	char *end;
	start = arr;
	end = arr;
	letf = arr;
	right = arr + len - 1;
	reverse(letf, right);//i ma a tneduts
	while (*end != '\0')
	{
		while ((*end != '\0') && (*end != ' '))
		{
			end++;
		}
		reverse(start, end-1);
		if (*end!= '\0')
		{
			
			start = end + 1;
			end++;
		}
	}
}
int main()
{
	char arr[] = "student a am i";
	int len;
	len	= strlen(arr);
	reverse_str(arr, len);
	printf("%s", arr);
	return 0;
}