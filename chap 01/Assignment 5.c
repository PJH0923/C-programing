/* ���ϸ�: assignment5.c

    * ����: scanf�� printf�� �̿��Ͽ� �����Ը� ����ϴ� �ڵ�.

    * �ۼ���: ������

    * ��¥: 2025.04.12

    * ����: v1.0

    */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ����Լ�(float w)
{
    printf("�Է��� �����Դ� %.2f KG�Դϴ�.", w);
}

int main()
{
    float w;

    printf("������?");
    scanf("%f", &w);

    ����Լ�(w);

    return 0;
}
