/* ���ϸ�: assignment9.c

    * ����: scanf�� printf�� �̿��Ͽ� 16������ 10������ ����ϴ� ���α׷�.

    * �ۼ���: ������

    * ��¥: 2025.04.12

    * ����: v1.0

    */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int hex;

    printf("16���� ������? ");
    scanf("%x", &hex);

    printf("16���� %X�� 10������ %d�Դϴ�.", hex, hex);

    return 0;
}
