/* 파일명: assignment 7.c

* 문제 : Programming Assignment 7번째 문제

* 작성자: 박종훈

* 날짜: 2025.04.07.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float 실수값;

	printf("실수?");
	scanf("%f", &실수값);
	printf("제곱: %e\n", 실수값 * 실수값);
	printf("세제곱: %e", 실수값 * 실수값 * 실수값);

	return 0;
}
//아무리 생각을 해도 답이 나오지 않아 조교님께 질문 후 내일까지 수정하겠습니다.