/* 파일명: assignment 3.c

* 문제 : Programming Assignment 3번째 문제

* 작성자: 박종훈

* 날짜: 2025.04.04.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int kg, m;
	float 에너지;

	printf("질량(kg)?");
	scanf("%d", &kg);
	printf("높이(m)?");
	scanf("%d", &m);

	printf("위치에너지: %6f", kg * m * 9.8);

	return 0;
}