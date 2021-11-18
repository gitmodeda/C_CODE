#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int reverse(int x)
{
	int digit,ret=0;
	if (x == 0)
	{
		return 0;
	}
	while (x)
	{
		digit= x % 10;
		x = x / 10;
		ret = ret * 10 + digit;
	}
	return ret;
}

int main()
{
	int x ;
	x=reverse(321);
	printf("%d", x);
	return 0;
}