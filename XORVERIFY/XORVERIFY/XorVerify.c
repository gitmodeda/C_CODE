#include "XorVerify.h"
uint8_t *XorVerify(uint8_t string[])
{
	int i = 1;
	int len;
	uint8_t out1, out2;
	uint8_t *ptemp=string;           //��¼string�ĵ�ַ
	len = strlen(string);
	uint8_t out = 0x00;
	while (i < len-1)
	{
		out ^= string[i];
		i++;
	}	
	out1 = ((out>>4)&0xf)|0x30;		 //�ַ�����
	out2 = (out&0xf)|0x30;			 //�ַ�����
	if (out1>57) out1 = out1 + 7;    //�ַ���ĸ
	if (out2 > 57) out2 = out2 + 7;  //�ַ���ĸ

	string[len] = out1 ;			//���ִ��м���BCCУ��
	string[len + 1] = out2 ;		//���ִ��м���BCCУ��
	return ptemp;					//�����ִ�
}
int main()
{
	int len;
	uint8_t *result;
	uint8_t string[50] = "$CCMSG,15950005,2,1,һ�����������߰˾�ʮ*";
	result = XorVerify(string);
	len = strlen(result);
	printf("%s\n", result);
	printf("%d\n", len);

	//printf("%s\n", string);
	return 0;
}