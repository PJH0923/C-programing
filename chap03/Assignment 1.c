/* 파일명: assignment 1.c

* 문제 : Programming Assignment 1번째 문제

* 작성자: 박종훈

* 날짜: 2025.04.04.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int 길이;
	printf("사각형 한 변의 길이?");
	scanf("%d", &길이);

	printf("정사각형의 넓이 : %d\n", 길이 * 길이);
	printf("정사각형의 둘레 : %d", 길이 * 4);

	return 0;
}