#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	int n=2, m=2, i, j, sum = 0;
	/*scanf("%d %d", &n, &m);*/
	int arr[2][2];
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<m; j++)
		{
			scanf("%d ", &arr[i][j]);
		}
	}
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<m; j++)
		{
			if (arr[i][j]>0)
			{
				sum = sum + arr[i][j];
			}
		}

	}
	printf("%d\n", sum);
	return 0;
}