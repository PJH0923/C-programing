#include <stdio.h>
#include "contact.h"
#include <string.h>

// isEqualContact()
//반환 값 : 같으면 1 반환함, 그렇지 않으면 0을 반환함.
//입력: 비교할 2개의 Contact 값

int isEqualContact(Contact a, Contact b)
{
	if (a.year == b.year && a.gender == b.gender &&
		strcmp(a.name, b.name) == 0 &&
		strcmp(a.phone, b.phone) == 0)
	{
		return 1;
	}
	return 0;
}

void printContact(Contact ct)
{
	// 이름: 000
	// 전번: 00000000000
	// 성별: 남성 or 여성
	// 연도: 0000

	printf("이름: %s \n", ct.name);
	printf("전번: %s \n", ct.phone);
	printf("성별: %s \n", ct.gender == MAN ? "남자" : "여자");
	printf("연도: %d \n", ct.year);

}

int isEqualContactPtr(const Contact* a, Contact* b)
{
	if (a->year == b->year && a->gender == b->gender &&
		strcmp(a->name, b->name) == 0 &&
		strcmp(a->phone, b->phone) == 0)
	{
		return 1;
	}
	return 0;
}

void printContactPtr(const Contact* ct)
{
	// 이름: 000
	// 전번: 00000000000
	// 성별: 남성 or 여성
	// 연도: 0000

	printf("이름: %s \n", ct->name);
	printf("전번: %s \n", ct->phone);
	printf("성별: %s \n", ct->gender == MAN ? "남자" : "여자");
	printf("연도: %d \n", ct->year);



}