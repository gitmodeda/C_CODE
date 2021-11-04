#include <stdio.h>
#include <assert.h>
//题目1:实现strstr
/*
char *My_Strstr(char *s1,char *s2)
{
	assert(s1 != NULL);
	assert(s2 != NULL);
	char *start = s1;
	char *s1_p = s1;
	char *s2_p = s2;
	while (*start != '\0')
	{
		s1_p = start;
		s2_p = s2;
		while (*s1_p != '\0'&& *s2_p != '\0')
		{
			if (*s1_p == *s2_p)
			{
				s1_p++;
				s2_p++;
			}
			else
			{
				break;
			}
		}
		if (*s2_p == '\0')
		{
			return start;
		}
		start++;
	}
	return NULL;
}
int main()
{
	char str1[] = "abbcddfadf";
	char str2[] = "bc";
	char *str=My_Strstr(str1, str2);
	printf("%s", str);
	return 0;
}
*/
//题目2:实现strchr
/*
char *My_Strchr(const char *s, int c)
{
	assert(s != NULL);
	while (*s != '\0')
	{
		if (*s != c)
		{
			s++;
		}
		else if (*s == c)
		{
			return s;
			break;
		}
	}
	return NULL;
}
int main()
{
	char str1[] = "abbcddfadf";
	int ch = 'c';
	char *str = My_Strchr(str1, ch);
	printf("%s", str);
	return 0;
}
*/
//题目3:实现strcmp
/*
int My_Strcmp(const char *s1,const char *s2)
{
	assert(s1 != NULL);
	assert(s2 != NULL);
	while ((*s1 != '\0') && (*s2 != '\0')&&(*s1 == *s2))
	{
			s1++;
			s2++;
		
	}
	if (*(unsigned char *)s1 > *(unsigned char *)s2)
	{
		return 1;
	}
	else if (*(unsigned char *)s1 < *(unsigned char *)s2)
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
	char str1[] = "abbc";
	char str2[] = "abba";
	int a = My_Strcmp(str1, str2);
	printf("%d", a);
	return 0;
}
*/
//题目4:实现memcpy
/*
void *My_Memcpy(void * s1, const void *  s2, size_t n)
{
	assert(s1 != NULL);
	assert(s2 != NULL);
	char *d = (char *)s1;
	const char *src = (const char*)s2;

	while (n-- > 0)
	{
		*d++=*src++;
	}
	return s1;

}
int main()
{
	char str1[16] = {0};
	char str2[16] = "abba";
	char *a = My_Memcpy(str1, str2, 2);
	printf("%s", a);
	return 0;
}
*/
//题目5:实现memmove
void *My_Memmove(void *s1, const void *s2, size_t n)
{
	assert(s1 != NULL);
	assert(s2 != NULL);
	char *d = (char *)s1;
	const char *src = (const char*)s2;

	if ((char*)s1 <= (const char *)src || (char *)s1 >= (const char *)src + n)
	{
		while (n-- > 0)
		{
			*(char *)d++ = *(const char*)src++;
			/*d = (char *)d + 1;
			src = (char *)src + 1;*/
		}
	}
	else
	{
		d = (char *)s1 + (n - 1);
		src = (const char *)s2 + (n - 1);
		while (n--)
		{
			*(char *)d-- = *(const char*)src--;
	/*		d = (char *)d - 1;
			src = (char *)src - 1;*/
		}

	}
}
int main()
{
	char arr[10] = "abcb";
	//char arr1[10] = { 0 };
	My_Memmove(arr+2, arr, 4);

	printf("内存覆盖：%s\n", arr+2);
	return 0;
}