#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
		unsigned long long int a, b, g=0, m=0;        //gΪ���Լ��mΪ��С������

		scanf("%d %d", &a, &b);
		unsigned long long int a1 = a, b1 = b, temp = 1;
		while (temp)//temp��Ϊ0�Ļ�
		{
			temp = a1 % b1;
			a1 = b1;
			b1 = temp;
		}
		g = a1;//���Լ��
		m = a * b / g;//��С������
		printf("%ld", g + m);

	return 0;
}