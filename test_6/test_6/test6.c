#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*��Ŀ1:ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���*/
/*
void Multiplication_Table(int row)
{
	int i,j;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int num;
	printf("����һ����ֵ:\n");
	scanf("%d", &num);
	Multiplication_Table(num);
	return 0;
}
*/

//��Ŀ2:ʹ�ú���ʵ���������Ľ�����

//void swop(int *num1, int *num2)
//{
//	/*
//	int temp;
//	temp = *num1;
//	*num1 = *num2;
//	*num2 = temp;
//	*/
//	/*
//	*num1 = *num1 + *num2;
//	*num2 = *num1 - *num2;
//	*num1 = *num1 - *num2;
//	*/
//	*num1 = *num1 ^ *num2;
//	*num2 = *num1 ^ *num2;
//	*num1 = *num1 ^ *num2;
//}
//int main()
//{
//	int a = 5, b = 6;
//	printf("a=%d b=%d\n", a, b);
//	swop(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//��Ŀ3:ʵ��һ�������ж�year�ǲ�������
/*
void lead_year(int year)
{
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
	{
		printf("%d������\n", year);
	}
	else
		printf("%d��������\n", year);
}
int main()
{
	int year;		
	printf("���������:\n");
	scanf("%d", &year);
	while (year>0)
	{
		printf("���������:\n");
		scanf("%d", &year);
		lead_year(year);
	}
	return 0;
}
*/
/*
��Ŀ4:
����һ�����飬
ʵ�ֺ���init������ʼ�����顢
ʵ��empty����������顢
ʵ��reverse���������������Ԫ�ص����á�
Ҫ���Լ���ƺ����Ĳ���������ֵ��
*/
/*
void init(int *arr, int num)
{
	int i;
	for (i = 0; i < num; i++)
	{
		*(arr+i) = i+1;
	}
	for (i = 0; i < num; i++)
	{
		printf("%d ", *(arr+i));
	}
	printf("\n");
}
void empty(int *arr, int num)
{
	int i;
	for (i = 0; i < num; i++)
	{
		*(arr + i) = 0;
	}
	for (i = 0; i < num; i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");
}
void reverse(int *arr, int num)
{
	int temp,i;
	int right = num - 1;
	int left = 0;
	while (left <= right)
	{
		temp = *(arr + left);
		*(arr + left) = *(arr + right);
		*(arr + right) = temp;
		left++;
		right--;
	}
	for (i = 0; i < num; i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");
}
int main()
{
	int arr[10];
	init(arr, 10);
	reverse(arr, 10);
	empty(arr, 10);
	return 0;
}
*/


//��Ŀ5:ʵ��һ���������ж�һ�����ǲ���������
void prime_number(int number)
{
	int i;
	int flag = 0;
	for (i = 2; i < number - 1; i++)
	{
		if (number%i == 0)
		{
			flag++;
		}
	}
	if (flag>0)
		printf("%d����һ������\n",number);
	else
		printf("%d��һ������\n", number);
}
int main()
{
	int num;
	printf("������һ����:\n");
	scanf("%d", &num); 
	prime_number(num);
	return 0;
}