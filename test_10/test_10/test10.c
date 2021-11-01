#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*题目1:写一个函数返回参数二进制中 1 的个数
比如： 15       0000 1111       4 个 1
程序原型：
int  count_one_bits(unsigned int value)
{
	// 返回 1的位数
} */
/*
int  count_one_bits(unsigned int value)
{
	int count=0;
	while (value)
	{
		value = value&(value - 1);//去掉二进制最低位的1
		count++;
	}
	return count;
} 
int main()
{
	int reg,num;
	printf("请输入一个数:");
	scanf("%d", &num);
	reg = count_one_bits(num);
	printf("%d\n", reg);
	return 0;
}
*/
/*题目2:获取一个数二进制序列中所有的偶数位和奇数位，
分别输出二进制序列。*/
/*
int main()
{
	int sum, i=31;
	printf("请输入一个数:\n");
	scanf("%d", &sum);
	printf("二进制:");
	while (i >= 0)
	{
		printf("%d ", (sum >> i)&0x1);
		i--;
	}
	printf("\n");
	printf("\n奇数位：");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (sum >> i) & 1);
	}
	printf("\n偶数位：");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (sum >> i) & 1); 
	}


	return 0;
}
*/

//题目3:输出一个整数的每一位。
/*
int main()
{
	int sum,i,a[20], count = 0;
	printf("请输入一个数:\n");
	scanf("%d", &sum);
	printf("二进制:");
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
4.编程实现：
两个int（32位）整数m和n的二进制表达中，
有多少个位(bit)不同？
输入例子 :
1999 2299
输出例子 : 7
*/
int main()
{
	int m, n, arr1[32] = { 0 }, arr2[32] = {0}, i = 0, count = 0;
	printf("请输入两个整数:\n");
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