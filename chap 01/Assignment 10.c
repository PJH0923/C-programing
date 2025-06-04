/* 파일명: assignment10.c

    * 내용: scanf와 printf를 사용하여 정수를 변환 하는 함수

    * 작성자: 박종훈

    * 날짜: 2025.04.12

    * 버전: v1.0

    */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num;

    printf("8진수로 입력하려면 012, 16진수로 입력하려면 0x12처럼 입력하세요.");
    scanf("%x", &num);

    printf(" 8진수: %#o\n", num);
    printf("10진수: %d\n", num);
    printf("16진수: %x\n", num);

}