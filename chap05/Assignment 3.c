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

    printf("거스름돈? ");
    scanf("%d", &money);

    money_julsa = julsa(money);

    printf("거스름돈 (10원미만 절사): %d\n", money_julsa);

    man_5 = money / 50000;
    man = money % 50000 / 10000;
    th_5 = money % 50000 % 10000 / 5000;
    th = money % 50000 % 10000 % 5000 / 1000;
    hd = money % 50000 % 10000 % 5000 % 1000 / 100;
    ten = money % 50000 % 10000 % 5000 % 1000 % 100 / 10;

    printf("50000원 %d장\n", man_5);
    printf("10000원 %d장\n", man);
    printf("5000원 %d장\n", th_5);
    printf("1000원 %d장\n", th);
    printf("100원 %d개\n", hd);
    printf("10원 %d개\n", ten);



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