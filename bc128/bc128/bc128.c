#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int n;
	int sum = 0;
	int a = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		a = a*i;
		sum += a;
	}
	printf("%d", sum);
	return 0;
}