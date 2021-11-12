#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n, i, j,space;
	while (scanf("%d", &n) != EOF)
	{
		space = 2;
		for (i = 0; i<n; i++)
		{
			if (i == 0 || i == 1 || i == n - 1)
			{
				for (j = 0; j <= i; j++)
				{
					printf("* ");
				}
				printf("\n");
			}
			else
			{
				printf("* ");
				for (j = 0; j < space; j++)
				{
					printf(" ");
				}
				printf("* ");
				printf("\n");
				space = space + 2;
			}
			
		}
	}
	return 0;
}
/*
    *
  **
*** 
  **
    *
*/