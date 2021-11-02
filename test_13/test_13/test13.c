#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>
/*f
题目1:调整数组使奇数全部都位于偶数前面。
题目：
输入一个整数数组，实现一个函数，
来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
所有偶数位于数组的后半部分。
*/
/*
void exchange(int arr[], int len)
{
	int tem;
	int *left = arr, *right = arr+len-1;
	while (left < right)
	{
		while ((left < right) && (*left % 2 != 0))//找到偶数
		{
			left++;
		}
		while ((left < right) && (*right % 2 == 0))//找到奇数
		{
			right--;
		}
		if (left < right)
		{
			tem = *left;
			*left = *right;
			*right = tem;
		}
	}
}
int main()
{
	int i;
	int arr[10] = { 1, 2, 3, 6, 5, 4, 8, 9, 7, 0 };
	exchange(arr, 10);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/
/*
题目2:
//杨氏矩阵
有一个二维数组.
数组的每行从左到右是递增的，每列从上到下是递增的.
在这样的数组中查找一个数字是否存在。
时间复杂度小于O(N);
数组：
1 2 3
2 3 4
3 4 5

1 3 4
2 4 5
4 5 6

1 2 3
4 5 6
7 8 9
*/
/*Step-wise线性搜索解法：
从右上角开始，每次将搜索值与右上角的值比较，如果大于右上角的值，则直接去除1行，
否则，则去掉1列。如下图显示了查找13的轨迹。首先与右上角15比较，13<15，所以去
掉最右1列，然后与11比较，这是13>11，去掉最上面1行…以此类推，最后找到13。算法
复杂度O(n)，最坏情况需要2n步，即从右上角开始查找，而要查找的目标值在左下角的时候。*/
bool stepWise(int mat[][3], int n, int target)
{
	int row, col;
	if (target<mat[0][0] || target>mat[n - 1][n - 1])
		return false;
	row = 0;
	col = n - 1;
	while (row <= n - 1 && col > 0)
	{
		if (target > mat[row][col])
		{
			row++;
		}
		else if (target < mat[row][col])
		{
			col--;
		}
		else
			return true;
	}
	return false;
}
int main()
{
	int mat[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int num,i;
	printf("请输入一个数:");
	scanf("%d", &num);
	i=stepWise(mat, 3, num);
	printf("%d", i);
	return 0;
}
