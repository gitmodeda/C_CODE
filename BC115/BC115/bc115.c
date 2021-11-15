#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
		unsigned long long int a, b, g=0, m=0;        //g为最大公约数m为最小公倍数

		scanf("%d %d", &a, &b);
		unsigned long long int a1 = a, b1 = b, temp = 1;
		while (temp)//temp不为0的话
		{
			temp = a1 % b1;
			a1 = b1;
			b1 = temp;
		}
		g = a1;//最大公约数
		m = a * b / g;//最小公倍数
		printf("%ld", g + m);

	return 0;
}