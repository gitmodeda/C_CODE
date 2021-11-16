#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int n, i;
	int ge;
	int arr[20] = { 0 };
	int count = 0;
	scanf("%d", &n);

	while (n)
	{
		ge = n % 10;
		if (ge % 2 == 0)
		{
			arr[count] = 0;
		}
		else
			arr[count] = 1;
		count++;
		n = n / 10;
	}
	int f = 0;
	for (i = count - 1; i >= 0; i--)
	{
		if (arr[i] != 0)
			++f;
		if (f == 0)
			continue;
		printf("%d", arr[i]);
	}
	if (f == 0)
		printf("%d", 0);
	return 0;
}