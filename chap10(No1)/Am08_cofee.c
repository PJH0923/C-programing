#include <stdio.h>
#include "Am08_coffee.h"

void print_product(PRODUCT p)
{
	printf("[%s]", p.name, p.price, p.inventory);
}