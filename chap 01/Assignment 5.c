/* 파일명: assignment5.c

    * 내용: scanf와 printf를 이용하여 몸무게를 출력하는 코드.

    * 작성자: 박종훈

    * 날짜: 2025.04.12

    * 버전: v1.0

    */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void 출력함수(float w)
{
    printf("입력한 몸무게는 %.2f KG입니다.", w);
}

int main()
{
    float w;

    printf("몸무게?");
    scanf("%f", &w);

    출력함수(w);

    return 0;
}
