#ifndef __TEST20_H
#define __TEST20_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NAME_MAX 20
#define SEX_MAX 3
#define TELE_MAX 12
#define ADDR_MAX 20
#define CONTACT_MAK 1000
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	CLEAR,
	SORT,
	SAVE
};
typedef struct PersonInfo{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
}PersonInfo;

typedef struct Contact{
	struct PersonInfo book[CONTACT_MAK];//����˵���Ϣ
	int sz;//��¼��Ч����
}Contact,* pContact;


#endif