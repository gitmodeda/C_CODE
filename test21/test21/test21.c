#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*int main()
{
	double *ptb;
	ptb = (double *)malloc(5*sizeof(double));
	if (ptb == NULL)
	{
		puts("Number not correctly entered -- bye.");
		exit(EXIT_FAILURE);
	}
	return 0;
}*/
void reverseString(char* s, int sSize){
	char temp;
	int i = 0;
	while (i <= sSize)
	{
		temp = s[i];
		s[i] = s[sSize-1];
		s[sSize-1] = temp;
		i++;
		sSize--;
	}
}
int main()
{
	int len;
	char s[] = "hello";
	len = strlen(s);
	reverseString(s, len);
	printf("%s\n", s);
	return 0;
}