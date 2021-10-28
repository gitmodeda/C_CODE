#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//题目1:写代码将三个数按从大到小输出
/*
int main()
{
int a, b, c, temp;
printf("Please Input three numbers:\n");
scanf_s("%d%d%d", &a, &b, &c);
//比较大小
if (a < b)
{
temp = a;
a = b;
b = temp;
}
if (a < c)
{
temp = c;
c = a;
a = temp;
}
if (b < c)
{
temp = c;
c = b;
b = temp;
}
printf("%d > %d > %d", a, b, c);
return 0;
}
*/

//题目2:写一个代码打印1-100之间所有3的倍数的数字
/*
int main()
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)//i是否整除3
		{
			printf("%d ", i);
		}

	}
	printf("\n");
	return 0;
}
*/

//题目2:求两个数的最大公约数。
//辗转相除法
/*
int main()
{
	int a, b,c;
	printf("Please Input two numbers:\n");
	scanf("%d %d", &a, &b);
	if (a >= b)
	{
		while ((c=a%b) != 0)
		{
			a = b;
			b = c;
		}
		printf("最大公约数为%d\n", b);
	}
	if (b > a)
	{
		while ((c=b%a) != 0)
		{
			b = a;
			a = c;
		}
		printf("最大公约数为%d\n", a);
	}
	return 0;
}
*/
//题目3:给定两个整形变量的值，将两个值的内容进行交换。
/*
int main()
{
	int a, b;
	int temp;
	printf("Please input two numbers:\n");
	scanf("%d %d", &a, &b);
	printf("a=%d,b=%d\n", a, b);
	temp = a;
	a = b;
	b = temp;
	printf("a=%d,b=%d\n", a, b);
}
*/

//题目4:不允许创建临时变量，交换两个数的内容
int main()
{
	int a, b;
	printf("Please input two numbers:\n");
	scanf("%d %d", &a, &b);
	printf("a=%d,b=%d\n", a, b);
	//a = a + b;
	//b = a - b;
	//a = a - b;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d,b=%d\n", a, b);

}
