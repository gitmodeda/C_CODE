#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int flag = 0;
	for (int i = 100; i <= 999; i++)
	{
		for (int j = 2; j<i; j++)
		{
			if (i%j == 0)
			{
				flag++;
			}
		}
		if (flag == 0)
		{
			printf("%d\n", i);
		}
		flag = 0;
	}
	return 0;
}