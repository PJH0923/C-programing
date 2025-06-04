#include <stdio.h>
#include "contact.h"

void testContact(void);

int main(void)
{
	testContact();

	return 0;
}

void testContact(void)
{
	Contact c1 = { "ȫ�浿", "01029963755" , MAN, 2025 };
	Contact c2 = { "ȫ�浿", "01029963755" , MAN, 2025 };
	Contact c3 = { "ȫ�浿", "01029963755" , MAN, 2025 };

	printContact(c1);
	printContactPtr(&c2);

	int resultt1 = isEqualContact(c1, c2);
	int resultt2 = isEqualContactPtr(&c2, &c3);

	printf("c1�� c2�� %s\n", resultt1 ? "�����ϴ�" : "�ٸ��ϴ�");
	printf("c2�� c3�� %s\n", resultt2 ? "�����ϴ�" : "�ٸ��ϴ�");
}