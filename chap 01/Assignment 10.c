/* ���ϸ�: assignment10.c

    * ����: scanf�� printf�� ����Ͽ� ������ ��ȯ �ϴ� �Լ�

    * �ۼ���: ������

    * ��¥: 2025.04.12

    * ����: v1.0

    */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num;

    printf("8������ �Է��Ϸ��� 012, 16������ �Է��Ϸ��� 0x12ó�� �Է��ϼ���.");
    scanf("%x", &num);

    printf(" 8����: %#o\n", num);
    printf("10����: %d\n", num);
    printf("16����: %x\n", num);

}