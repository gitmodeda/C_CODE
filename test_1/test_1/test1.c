#include <stdio.h>

//��Ŀ1.��ӡ100~200֮�������
/*
int main()
{
	int i;
	int m, flag=0;
	for (m = 100; m <= 200; m++)
	{

		for (i = 2; i < m; i++)
		{
			if (m%i == 0)
				break;

		}
		if (m == i)
		{
			printf("%d ", m);
		}
	}
	return 0;
}
*/

//��Ŀ2:����˷��ھ���
/*
int main()
{
	int i, j,n;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%dx%d=%2d ", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}
*/

//��Ŀ3:�ж�1000��-- - 2000��֮�������
int main()
{
	int i = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
		{
			printf("%d ", i);
		}
	}
	return 0;
}