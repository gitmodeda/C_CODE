#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//��Ŀ1:�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
//�ǵݹ�
/*
int main()
{
	int n,Sn,Sm,Si,i;
	Sm = 1;
	Si = 1;
	printf("����һ����:\n");
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

//�ݹ�
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
	printf("����һ����:\n");
	scanf("%d", &n);
	sum = Fib(n);
	printf("%d\n", sum);
	return 0;
}
*/
//��Ŀ2:��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
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
	printf("������һ����:\n");
	scanf("%d %d",&n,&k);
	sum=multiply(n, k);
	printf("%d^%d=%d\n",n,k,sum);
	return 0;
}
*/
/*��Ŀ3:дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19*/
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
	printf("����һ���Ǹ�����:\n");
	scanf("%d", &num);
	sum = DigitSum(num);
	printf("%d\n", sum);
}
*/
/*4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
ʵ�֣��������ַ����е��ַ��������С�
Ҫ�󣺲���ʹ��C�������е��ַ�������������*/
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
//��Ŀ5:�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//�ǵݹ�
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
//�ݹ鷽��1�Լ�д��
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
//�ݹ鷽��2��CSDN��
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
//��Ŀ6:�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//�ǵݹ��Լ�д
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
//�ݹ��Լ�д
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
//��Ŀ7:�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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
	printf("������һ����ֵ:\n");
	scanf("%d", &sum);
	Print(sum);

	return 0;
}