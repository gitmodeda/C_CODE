#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
��Ŀ1:��д������
unsigned int reverse_bit(unsigned int value);
��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��
�磺
��32λ������25���ֵ�������и�λ��
00000000000000000000000000011001
��ת�󣺣�2550136832��
10011000000000000000000000000000
���������أ�
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
	printf("������һ����:");
	scanf("%d", &value);
	ret=reverse_bit(value);
	printf("%u", ret);
	return 0;
}
*/
//��Ŀ2:��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ
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
	printf("������������:");
	scanf("%d %d", &a, &b);
	ret = avg(a,b);
	printf("%d", ret);
	return 0;
}
*/
/*
��Ŀ3:���ʵ�֣�
һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
���ҳ�������֡���ʹ��λ���㣩
*/
/*
int main()
{
	int arr[7] = { 1, 2, 3, 4, 1, 2, 3 };
	int i,ret=0;
	int len = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < len; i++)
	{
		ret = ret ^ arr[i];//��һ��0�Ķ�������ɶԵ�һ�������ʱ���Ϊ0
	}
	printf("%d", ret);
	return 0;
}
*/
/*
��Ŀ4:
��һ���ַ����������Ϊ:"student a am i",
���㽫��������ݸ�Ϊ"i am a student".
Ҫ��
����ʹ�ÿ⺯����
ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���

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