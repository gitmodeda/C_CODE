#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*题目1:实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。*/
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
	printf("输入一个数值:\n");
	scanf("%d", &num);
	Multiplication_Table(num);
	return 0;
}
*/

//题目2:使用函数实现两个数的交换。

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

//题目3:实现一个函数判断year是不是润年
/*
void lead_year(int year)
{
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
	{
		printf("%d是闰年\n", year);
	}
	else
		printf("%d不是闰年\n", year);
}
int main()
{
	int year;		
	printf("请输入年份:\n");
	scanf("%d", &year);
	while (year>0)
	{
		printf("请输入年份:\n");
		scanf("%d", &year);
		lead_year(year);
	}
	return 0;
}
*/
/*
题目4:
创建一个数组，
实现函数init（）初始化数组、
实现empty（）清空数组、
实现reverse（）函数完成数组元素的逆置。
要求：自己设计函数的参数，返回值。
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


//题目5:实现一个函数，判断一个数是不是素数。
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
		printf("%d不是一个素数\n",number);
	else
		printf("%d是一个素数\n", number);
}
int main()
{
	int num;
	printf("请输入一个数:\n");
	scanf("%d", &num); 
	prime_number(num);
	return 0;
}