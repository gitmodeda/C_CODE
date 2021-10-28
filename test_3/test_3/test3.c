#include <stdio.h>
//题目1:将数组A中的内容和数组B中的内容进行交换。（数组一样大）
/*
int main()
{
	int a[9] = { 1, 6, 2, 3, 4, 5, 9, 8, 7 };
	int b[9] = { 2, 3, 6, 1, 4, 5, 8, 7, 9 };
	int temp;
	int i;
	for (i = 0; i < 9; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	printf("a: ");
	for (i = 0; i < 9; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("b: ");
	for (i = 0; i < 9; i++)
	{
		printf("%d ", b[i]);
	}

}
*/
//题目3:计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值
/*
int main()
{
	int i;
	double num = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		num += flag*1.0 / i;
		flag = -flag;
	}
	printf("%lf\n", num);
}
*/
//题目3:编写程序数一下 1到 100 的所有整数中出现多少个数字9。
int main()
{
	int i,k,num=0;
	for (i = 1; i <= 100; i++)
	{
		k = i;
		while (k != 0)
		{
			if (k %10== 9)
				num++;
			k = k / 10;
		}
	}
	printf("%d\n", num);
}


