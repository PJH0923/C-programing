/* ���ϸ�: assignment7.c

    * ����: scanf�� printf�� �̿��Ͽ� �Է¹��� Ŀ�ǻ���� ����ϴ� �ڵ�.

    * �ۼ���: ������

    * ��¥: 2025.04.12

    * ����: v1.0

    */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ����Լ�(char ������, int ����)
{
    printf("%c ������ %d ���� �ֹ��մϴ�.", ������, ����);
}

int main()
{
    char ������;
    int ����;

    printf("Ŀ�� ������(S,T,G)�� �ֹ� ����?");
    scanf("%c %d", &������, &����);

    ����Լ�(������, ����);

    return 0;
}
