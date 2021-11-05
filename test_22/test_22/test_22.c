#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	char ch;
	int i,len;
	char j;
	scanf("%c", &ch);
	len = ch - 'A';
	for (i = 0; i <= len; i++)
	{
		for (j = 0; j < len - i; j++)
			{
				printf(" ");
			}
		
		for (j = 'A'; j-'A' <=i; j++)
		{
			printf("%c",j);
		}
		for (; j-1 >'A'; j--)
		{
			printf("%c",j-2);
		}
		printf("\n");
	}
	
	return 0;
}