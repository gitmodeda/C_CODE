#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*��Ŀ1.����Ļ���������ͼ����
      *
     ***
    *****
   *******
  *********
 ***********
*************
 ***********
  *********
   *******
    *****
     ***
      *
*/
/*
int main()
{
	int i, j,n;
	for (i = 1; i <= 7; i++)
	{
		n = i;
		for (j = 0; j < 7-i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * n - 1; j++)
		{
			printf("*");
		}
		for (j = 0; j < 7-i; j++)
		{
			printf(" ");
		}
		printf("\n");
	}
	for (i = 6; i >= 1; i--)
	{
		n = i;
		for (j = 0; j < 7 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * n - 1; j++)
		{
			printf("*");
		}
		for (j = 0; j < 7-i; j++)
		{
			printf(" ");
		}
		printf("\n");
	}
}
*/
/*��Ŀ2:���0��999֮������С�ˮ�ɻ������������
��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1��5��3 ? ����153��һ����ˮ�ɻ�������
*/
/*
�������У�ˮ�ɻ�����Narcissistic number��Ҳ��Ϊ������������������ķ˹׳����ķ˹��������Armstrong number������ָһNλ�����������֮N�η��͵��ڸ�����
����153��370��371��407������λ����ˮ�ɻ������������֮�����͵��ڸ�����
153 = 1^3 + 5^3 + 3^3��
370 = 3^3 + 7^3 + 0^3��
371 = 3^3 + 7^3 + 1^3��
407 = 4^3 + 0^3 + 7^3��
*/
//����1
/*
int main()
{
	int a, b, c,k;
	int num;
	int i;
	for (i = 100; i <= 999; i++)
	{
		k = i;
		a = k / 100;
		c = k % 10;
		k = k / 10;
		b = k % 10;		
		num = a*a*a + b*b*b + c*c*c;
		if (num == i)
		{
				printf("%d��ˮ�ɻ���\n", i);
		}
		
	}
	return 0;
}
*/
//����2
/*
int main()
{

	int i, j, k, n;

	printf("ˮ�ɻ�����");

	for (n = 100; n<1000; n++)

	{

		i = n / 100;

		j = n / 10 - i * 10;

		k = n % 10;

		if (n == i*i*i + j*j*j + k*k*k)
			printf("%d\n ", n);

	}

	return 0;

}
*/

//��Ŀ4:��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ������
int main()
{
	int i,Sn=0,sum=0;
	int n = 2;
	for (i = 1; i <= 5; i++)
	{
		sum = sum * 10 + n;
		Sn += sum;
	}
	printf("Sn = %d\n", Sn);
	return 0;
}
