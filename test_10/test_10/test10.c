#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*��Ŀ1:дһ���������ز����������� 1 �ĸ���
���磺 15       0000 1111       4 �� 1
����ԭ�ͣ�
int  count_one_bits(unsigned int value)
{
	// ���� 1��λ��
} */
/*
int  count_one_bits(unsigned int value)
{
	int count=0;
	while (value)
	{
		value = value&(value - 1);//ȥ�����������λ��1
		count++;
	}
	return count;
} 
int main()
{
	int reg,num;
	printf("������һ����:");
	scanf("%d", &num);
	reg = count_one_bits(num);
	printf("%d\n", reg);
	return 0;
}
*/
/*��Ŀ2:��ȡһ�������������������е�ż��λ������λ��
�ֱ�������������С�*/
/*
int main()
{
	int sum, i=31;
	printf("������һ����:\n");
	scanf("%d", &sum);
	printf("������:");
	while (i >= 0)
	{
		printf("%d ", (sum >> i)&0x1);
		i--;
	}
	printf("\n");
	printf("\n����λ��");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (sum >> i) & 1);
	}
	printf("\nż��λ��");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (sum >> i) & 1); 
	}


	return 0;
}
*/

//��Ŀ3:���һ��������ÿһλ��
/*
int main()
{
	int sum,i,a[20], count = 0;
	printf("������һ����:\n");
	scanf("%d", &sum);
	printf("������:");
	while (sum!=0)
	{
		a[count] = sum % 10;
		sum = sum / 10;
		count++;

	}
	for (i = count-1; i >= 0; i--)
	{
		printf("%d ", a[i]);
	}
}
*/
/*
4.���ʵ�֣�
����int��32λ������m��n�Ķ����Ʊ���У�
�ж��ٸ�λ(bit)��ͬ��
�������� :
1999 2299
������� : 7
*/
int main()
{
	int m, n, arr1[32] = { 0 }, arr2[32] = {0}, i = 0, count = 0;
	printf("��������������:\n");
	scanf("%d %d", &m, &n);
	while (m != 0)
	{
		arr1[i] = m%2;
		m = m / 2;
		i++;
	}
	for (i = 0; i <32; i++)
	{
		printf("%d", arr1[i]);
	}
	printf("\n");
	i = 0;
	while (n != 0)
	{
		arr2[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (i = 0; i <32; i++)
	{
		printf("%d", arr2[i]);
	}
	printf("\n");
	for (i = 0; i <32; i++)
	{
		if (arr1[i] != arr2[i])
		{
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}