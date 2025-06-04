/* 파일명: assignment2.c

    * 내용: scanf와 printf를 이용하여 입&출력을 하는 코드

    * 작성자: 박종훈

    * 날짜: 2025.04.12

    * 버전: v1.0

    */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void 출력함수(int n, float g)
{
    printf("%d번 학생의 학점은 %.6f입니다.", n, g);
}

int main()
{
    int n;
    float g;

    printf("번호?");
    scanf("%d", &n);

    printf("학점?");
    scanf("%f", &g);

    출력함수(n, g);

    return 0;
}

