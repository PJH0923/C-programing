/* 파일명: assignment11.c

	* 내용: scanf와 printf를 사용하여 원주율을 원하는 소주점 까지만 출력하게 하는 프로그램.

	* 작성자: 박종훈

	* 날짜: 2025.04.12

	* 버전: v1.0

	*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define pi 3.14159265

int main(void)
{
	printf("%.2f\n", pi);
	printf("%.4f\n", pi);
	printf("%.6f\n", pi);
	printf("%.8f\n", pi);
	printf("%e", pi);
	return 0;
}