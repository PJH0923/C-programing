/* ���ϸ�: assignment 4.c

* ���� : Programming Assignment 4��° ����

* �ۼ���: ������

* ��¥: 2025.04.04.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, m;
	float ���Ǿ�;

	printf("��(N)?");
	scanf("%d", &N);

	printf("�̵��Ÿ�(m)?");
	scanf("%d", &m);

	���Ǿ� = N * m;

	printf("���� ��: %.2f", ���Ǿ�);

	return 0;
}