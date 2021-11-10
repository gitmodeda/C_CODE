#include "XorVerify.h"
uint8_t *XorVerify(uint8_t string[])
{
	int i = 1;
	int len;
	uint8_t out1, out2;
	uint8_t *ptemp=string;           //记录string的地址
	len = strlen(string);
	uint8_t out = 0x00;
	while (i < len-1)
	{
		out ^= string[i];
		i++;
	}	
	out1 = ((out>>4)&0xf)|0x30;		 //字符数字
	out2 = (out&0xf)|0x30;			 //字符数字
	if (out1>57) out1 = out1 + 7;    //字符字母
	if (out2 > 57) out2 = out2 + 7;  //字符字母

	string[len] = out1 ;			//在字串中加入BCC校验
	string[len + 1] = out2 ;		//在字串中加入BCC校验
	return ptemp;					//返回字串
}
int main()
{
	int len;
	uint8_t *result;
	uint8_t string[50] = "$CCMSG,15950005,2,1,一二三四五六七八九十*";
	result = XorVerify(string);
	len = strlen(result);
	printf("%s\n", result);
	printf("%d\n", len);

	//printf("%s\n", string);
	return 0;
}