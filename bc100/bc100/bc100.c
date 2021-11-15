#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void RowSwop(int arr[12][12], int row, int col, int a, int b)
//{
//	int temp = 0;
//	int j;
//	for (j = 0; j<col; j++)
//	{
//		temp = arr[a - 1][j];
//		arr[a - 1][j] = arr[b - 1][j];
//		arr[b - 1][j] = temp;
//	}
//}
//void ColSwop(int arr[2][2], int row, int col, int a, int b)
//{
//	int temp = 0;
//	int i;
//	for (i = 0; i<row; i++)
//	{
//		temp = arr[i][a - 1];
//		arr[i][a - 1] = arr[i][b - 1];
//		arr[i][b - 1] = temp;
//	}
//}
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int i = 0, num[100];
	while (n)
	{
		num[i++] = n % 6;
		n = n / 6;
	}
	for (i = i - 1; i >= 0; i--)
	{
		printf("%d", num[i]);
	}
	return 0;
}