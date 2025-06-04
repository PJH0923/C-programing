/* 파일명: assignment 4.c

* 문제 : Programming Assignment 4번째 문제

* 작성자: 박종훈

* 날짜: 2025.04.04.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, m;
	float 일의양;

	printf("힘(N)?");
	scanf("%d", &N);

	printf("이동거리(m)?");
	scanf("%d", &m);

	일의양 = N * m;

	printf("일의 양: %.2f", 일의양);

	return 0;
}