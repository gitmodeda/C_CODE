#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//题目1:递归和非递归分别实现求第n个斐波那契数。
//非递归
/*
int main()
{
	int n,Sn,Sm,Si,i;
	Sm = 1;
	Si = 1;
	printf("输入一个数:\n");
	scanf("%d", &n);
	for (i = 3; i <= n; i++)
	{
		Sn = Sm + Si;
		Sm = Si;
		Si = Sn;
	}
	printf("%d\n",Sn);
	return 0;
}
*/

//递归
/*
int Fib(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else if (n >= 3)
	{
		return Fib(n - 1) + Fib(n - 2);
	}
}
int main()
{
	int n,sum;
	printf("输入一个数:\n");
	scanf("%d", &n);
	sum = Fib(n);
	printf("%d\n", sum);
	return 0;
}
*/
//题目2:编写一个函数实现n^k，使用递归实现
/*
int multiply(int n,int k)
{
	if (k == 0)
		return 1;
	else if (k == 1)
		return n;
	else
		return n*multiply(n, k - 1);
}
int main()
{
	int n,k,sum;
	printf("请输入一个数:\n");
	scanf("%d %d",&n,&k);
	sum=multiply(n, k);
	printf("%d^%d=%d\n",n,k,sum);
	return 0;
}
*/
/*题目3:写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19*/
/*
int DigitSum(n)
{
	if (n < 10)
	{
		return n;
	}
	return n % 10 + DigitSum(n/10);
}
int main()
{
	int num,sum;
	printf("输入一个非负整数:\n");
	scanf("%d", &num);
	sum = DigitSum(num);
	printf("%d\n", sum);
}
*/
/*4. 编写一个函数 reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列。
要求：不能使用C函数库中的字符串操作函数。*/
/*
void reverse_string(char *string)
{
	if (*string != '\0')
	{
		string++;
		reverse_string(string);
		printf("%c", *(string - 1));
	}
}
int main()
{

	char *string="infaldfkad";
	reverse_string(string);
	printf("\n");
	return 0;
}
*/
//题目5:递归和非递归分别实现strlen
//非递归
/*int My_Strlen(char *string)
{
	int n = 0;
	while (*string != '\0')
	{
		string++;
		n++;
	}
	return n;
}*/
//递归方法1自己写的
/*int My_Strlen(char *string)
{
	int n = 0;
	while (*string != '\0')
	{
		string++;
		My_Strlen(string);
		n++;
	}
	return n;
}*/
//递归方法2，CSDN的
/*
int My_Strlen(char *string)
{
	if (*string == '\0')
	{
		return 0;
	}
	else
	{
		string++;
		return My_Strlen(string) + 1;
	}
}
int main()
{
	int number;
	char *string = "dsafdfdfadf";
	number = My_Strlen(string);
	printf("%d\n", number);
	return 0;
}
*/
//题目6:递归和非递归分别实现求n的阶乘
//非递归自己写
/*int factorial(int n)
{
	int i,sum=1;
	if (n == 0)
		return 1;
	else
	{
		for (i = 1; i <= n; i++)
		{
			sum *= i;
		}
	}
	return sum;
}*/
//递归自己写
/*
int factorial(int n)
{

	if (n == 0)
		return 1;
	else
	{
		return n * factorial(n - 1);
	}

}
int main()
{
	int n,sum;
	printf("Please Input a number:\n");
	scanf("%d", &n);
	sum = factorial(n);
	printf("sum = %d\n", sum);
	return 0;
}
*/
//题目7:递归方式实现打印一个整数的每一位
void Print(int sum)
{
	int i;
	if (sum <10)
		printf("%d\n", sum);
	else
	{
		i=sum % 10;
		Print(sum / 10);
		printf("%d\n", i);
		
	}
}
int main()
{
	int sum,number;
	printf("请输入一个数值:\n");
	scanf("%d", &sum);
	Print(sum);

	return 0;
}