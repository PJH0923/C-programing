/* 파일명: assignment 11.c

* 문제 : Programming Assignment 11번째 문제

* 작성자: 박종훈

* 날짜: 2025.04.08.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float 원화, 미화;
	printf("KRW?");
	scanf("%f", &원화);

	printf("원/달러 환율?");
	scanf("%f", &미화);
	printf("KRW %f = USD %.2f", 미화 / 원화);

	return 0;
}

//11번 문제도 머리를 굴러도 답이 나오지 않아 조교님께 질문 후 내일까지 수정하겠습니다.