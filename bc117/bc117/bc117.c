#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void sort(int k[], int n)
{
	int i, j;
	for (i = 0; i<n - 1; i++)
	{
		for (j = 0; j<n - i - 1; j++)
		{
			if (k[j]>k[j + 1])
			{
				int temp = k[j];
				k[j] = k[j + 1];
				k[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int n=4;
	//scanf("%d", &n);
	int k[4 + 1];
	for (int i = 0; i<n; i++)
	{
		scanf("%d", &k[i]);
	}
	sort(k, n);
	for (int j = 0; j<n; j++)
	{
		if (k[j] == k[j + 1])
			continue;
		printf("%d ", k[j]);
	}
	return 0;
}