/* ���ϸ�: assignment2.c

    * ����: scanf�� printf�� �̿��Ͽ� ��&����� �ϴ� �ڵ�

    * �ۼ���: ������

    * ��¥: 2025.04.12

    * ����: v1.0

    */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ����Լ�(int n, float g)
{
    printf("%d�� �л��� ������ %.6f�Դϴ�.", n, g);
}

int main()
{
    int n;
    float g;

    printf("��ȣ?");
    scanf("%d", &n);

    printf("����?");
    scanf("%f", &g);

    ����Լ�(n, g);

    return 0;
}

