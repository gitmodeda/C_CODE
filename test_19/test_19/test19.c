#include <stdio.h>
//1.模拟实现strncpy
/*
char *My_Strncpy(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t num = n;
	char *pTemp = s1;
	for (i = 0; i < n; i++)
	{
		if (*s2 == '\0'&&i < n)
		{
			for (; i < n; i++)
			{
				*s1++ = '\0';
			}
			break;
		}
		*s1++ = *s2++;
	}
	return pTemp;
}
int main()
{
	char s1[16] = "sfadf";
	char s2[16] = "sdsdfs";
	My_Strncpy(s1, s2, 2);
	printf("%s", s1);
	return 0;
}
*/
//2.模拟实现strncat
/*
char *My_Strncat(char *s1, const char *s2, size_t n)
{
	
	char *pTemp = s1;
	while (*s1 != '\0')
	{
		s1++;
	}
	while ((n-- > 0) && (*s2 != '\0'))
	{
		*s1++ = *s2++;
	}
	return pTemp;

}
int main()
{
	char s1[16] = "sfadf";
	char s2[16] = "sdsdfs";
	My_Strncat(s1, s2, 4);
	printf("%s", s1);
	return 0;
}
*/
//3.模拟实现strncmp
int My_Strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i = 1;
	while ((*s1 != '\0') && (*s2 != '\n') && (i < n) && (*s1 == *s2))
	{
		s1++;
		s2++;
		i++;
	}
	if (*(unsigned char *)s1>*(unsigned char *)s2)
	{
		return 1;
	}
	else if (*(unsigned char *)s1<*(unsigned char *)s2)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int i;
	char s1[16] = "sfadf";
	char s2[16] = "sfaeg";
	i = My_Strncmp(s1, s2, 4);
	printf("%d", i);
	return 0;
}
