#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*题目1.在屏幕上输出以下图案：
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
/*题目2:求出0～999之间的所有“水仙花数”并输出。
“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。
*/
/*
在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
153 = 1^3 + 5^3 + 3^3。
370 = 3^3 + 7^3 + 0^3。
371 = 3^3 + 7^3 + 1^3。
407 = 4^3 + 0^3 + 7^3。
*/
//方法1
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
				printf("%d是水仙话数\n", i);
		}
		
	}
	return 0;
}
*/
//方法2
/*
int main()
{

	int i, j, k, n;

	printf("水仙花数：");

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

//题目4:求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字
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
