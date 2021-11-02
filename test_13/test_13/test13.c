#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>
/*f
��Ŀ1:��������ʹ����ȫ����λ��ż��ǰ�档
��Ŀ��
����һ���������飬ʵ��һ��������
�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
����ż��λ������ĺ�벿�֡�
*/
/*
void exchange(int arr[], int len)
{
	int tem;
	int *left = arr, *right = arr+len-1;
	while (left < right)
	{
		while ((left < right) && (*left % 2 != 0))//�ҵ�ż��
		{
			left++;
		}
		while ((left < right) && (*right % 2 == 0))//�ҵ�����
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
��Ŀ2:
//���Ͼ���
��һ����ά����.
�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
�������������в���һ�������Ƿ���ڡ�
ʱ�临�Ӷ�С��O(N);
���飺
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
/*Step-wise���������ⷨ��
�����Ͻǿ�ʼ��ÿ�ν�����ֵ�����Ͻǵ�ֵ�Ƚϣ�����������Ͻǵ�ֵ����ֱ��ȥ��1�У�
������ȥ��1�С�����ͼ��ʾ�˲���13�Ĺ켣�����������Ͻ�15�Ƚϣ�13<15������ȥ
������1�У�Ȼ����11�Ƚϣ�����13>11��ȥ��������1�С��Դ����ƣ�����ҵ�13���㷨
���Ӷ�O(n)��������Ҫ2n�����������Ͻǿ�ʼ���ң���Ҫ���ҵ�Ŀ��ֵ�����½ǵ�ʱ��*/
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
	printf("������һ����:");
	scanf("%d", &num);
	i=stepWise(mat, 3, num);
	printf("%d", i);
	return 0;
}
