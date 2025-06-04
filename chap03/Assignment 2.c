/* 파일명: assignment 2.c

* 문제 : Programming Assignment 2번째 문제

* 작성자: 박종훈

* 날짜: 2025.04.04.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int 가로의길이;
	int 세로의길이;

	printf("가로의 길이?");
	scanf("%d", &가로의길이);

	printf("세로의 길이?");
	scanf("%d", &세로의길이);

	printf("직사각형의 넓이 : &d\n", 가로의길이 * 세로의길이);
	printf("직사각형의 둘레 : %d", 가로의길이 * 2 + 세로의길이 * 2);

	return 0;

}