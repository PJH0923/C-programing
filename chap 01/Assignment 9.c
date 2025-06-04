/* 파일명: assignment9.c

    * 내용: scanf와 printf를 이용하여 16진수와 10진수를 출력하는 프로그램.

    * 작성자: 박종훈

    * 날짜: 2025.04.12

    * 버전: v1.0

    */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int hex;

    printf("16진수 정수는? ");
    scanf("%x", &hex);

    printf("16진수 %X는 10진수로 %d입니다.", hex, hex);

    return 0;
}
