/* 파일명: assignment7.c

    * 내용: scanf와 printf를 이용하여 입력받은 커피사이즈를 출력하는 코드.

    * 작성자: 박종훈

    * 날짜: 2025.04.12

    * 버전: v1.0

    */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void 출력함수(char 사이즈, int 수량)
{
    printf("%c 사이즈 %d 잔을 주문합니다.", 사이즈, 수량);
}

int main()
{
    char 사이즈;
    int 수량;

    printf("커피 사이즈(S,T,G)와 주문 수량?");
    scanf("%c %d", &사이즈, &수량);

    출력함수(사이즈, 수량);

    return 0;
}
