#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��Ŀ1:д���뽫���������Ӵ�С���
/*
int main()
{
int a, b, c, temp;
printf("Please Input three numbers:\n");
scanf_s("%d%d%d", &a, &b, &c);
//�Ƚϴ�С
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

//��Ŀ2:дһ�������ӡ1-100֮������3�ı���������
/*
int main()
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)//i�Ƿ�����3
		{
			printf("%d ", i);
		}

	}
	printf("\n");
	return 0;
}
*/

//��Ŀ2:�������������Լ����
//շת�����
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
		printf("���Լ��Ϊ%d\n", b);
	}
	if (b > a)
	{
		while ((c=b%a) != 0)
		{
			b = a;
			a = c;
		}
		printf("���Լ��Ϊ%d\n", a);
	}
	return 0;
}
*/
//��Ŀ3:�����������α�����ֵ��������ֵ�����ݽ��н�����
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

//��Ŀ4:����������ʱ����������������������
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
