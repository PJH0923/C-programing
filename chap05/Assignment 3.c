#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0503(void);
int julsa(int a);


int main()
{
    assignment0503();
    return;
}

int assignment0503(void)
{
    int money;
    int money_julsa;
    int man_5, man, th_5, th, hd, ten;

    printf("�Ž�����? ");
    scanf("%d", &money);

    money_julsa = julsa(money);

    printf("�Ž����� (10���̸� ����): %d\n", money_julsa);

    man_5 = money / 50000;
    man = money % 50000 / 10000;
    th_5 = money % 50000 % 10000 / 5000;
    th = money % 50000 % 10000 % 5000 / 1000;
    hd = money % 50000 % 10000 % 5000 % 1000 / 100;
    ten = money % 50000 % 10000 % 5000 % 1000 % 100 / 10;

    printf("50000�� %d��\n", man_5);
    printf("10000�� %d��\n", man);
    printf("5000�� %d��\n", th_5);
    printf("1000�� %d��\n", th);
    printf("100�� %d��\n", hd);
    printf("10�� %d��\n", ten);



    return 0;
}

int julsa(int a)
{
    int b = 0;
    b = a;

    if (a > 10)
    {
        a = a % 10;
    }

    b = b - a;

    return b;
}