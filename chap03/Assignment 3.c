/* ���ϸ�: assignment 3.c

* ���� : Programming Assignment 3��° ����

* �ۼ���: ������

* ��¥: 2025.04.04.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int kg, m;
	float ������;

	printf("����(kg)?");
	scanf("%d", &kg);
	printf("����(m)?");
	scanf("%d", &m);

	printf("��ġ������: %6f", kg * m * 9.8);

	return 0;
}