/* 파일명: assignment 6.c

* 문제 : Programming Assignment 6번째 문제

* 작성자: 박종훈

* 날짜: 2025.04.07.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float m = 0, 평;
	printf("아파트의 면적(제곱미터)? ");
	scanf("%f", &m);

	평 = m * 0.3025;

	printf("%.2f 제곱미터 = %.2f 평", m, 평);

	return 0;
}